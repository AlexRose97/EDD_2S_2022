import requests
import json

base_url = "http://3.88.234.119:8080/"

if __name__ == '__main__':
    #obtener listado
    res = requests.get(f'{base_url}/Lista/')
    data = res.json()#convertimos la respuesta en dict
    print(data)

    #registrar nuevo
    res = requests.post(f'{base_url}/Lista/50')
    data = res.json()#convertimos la respuesta en dict
    print(data)

    #obtener listado
    res = requests.get(f'{base_url}/Lista/')
    data = res.json()
    print(data)