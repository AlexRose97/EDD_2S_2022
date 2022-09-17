#include "./glove/glovehttpserver.hpp"
#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <vector>
#include "./glove/json.hpp"
#include "EDD/ListaSimple.cpp"

int atoi(std::string s)
{
    try
    {
        return std::stod(s);
    }
    catch (std::exception &e)
    {
        return 0;
    }
}

static std::string jsonkv(std::string k, std::string v)
{
    /* "k": "v" */
    return "\"" + k + "\": \"" + v + "\"";
}

class Servidor
{
public:
    Servidor()
    {
        pruebas.InsertarEnOrden(100);
        pruebas.InsertarEnOrden(300);
        pruebas.InsertarEnOrden(200);
    }

    void get(GloveHttpRequest &request, GloveHttpResponse &response)
    {
        response.contentType("text/json");
        if (request.special["Id"].empty())
            response << pruebas.getDatos();
        else
        {
            response << "{ "
                     << jsonkv("status", "ok") << ",\n"
                     << jsonkv("Id_buscado", request.special["Id"]) << " }";
        }
    }

    void post(GloveHttpRequest &request, GloveHttpResponse &response)
    {
        pruebas.InsertarEnOrden(atoi(request.special["Id"]));
        response << "{ "
                 << jsonkv("status", "ok") << ",\n"
                 << jsonkv("Id_nuevo",request.special["Id"]) << " }";
    }

private:
    ListaSimple pruebas;
};

int main(int argc, char *argv[])
{
    Servidor cine;

    GloveHttpServer serv(8080, "", 2048);
    serv.compression("gzip, deflate");
    namespace ph = std::placeholders;
    serv.addRest("/Lista/$Id", 1,
                 GloveHttpServer::jsonApiErrorCall,
                 std::bind(&Servidor::get, &cine, ph::_1, ph::_2),
                 std::bind(&Servidor::post, &cine, ph::_1, ph::_2));
    std::cout << "Servidor en Ejecucion" << std::endl;
    while (1)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "TEST" << std::endl;
}