import requests##pip3 install request
import json



base_url = "http://3.88.234.119:8080/"

if __name__ == '__main__':
    res = requests.post(f'{base_url}/Lista/800')
    data = res.text#convertimos la respuesta en dict
    print(data)

    #obtener listado
    res = requests.get(f'{base_url}/Lista/')
    data = res.text#convertimos la respuesta en dict
    print(data)

    #obtener listado
    res = requests.get(f'{base_url}/Lista/800')
    data = res.text#convertimos la respuesta en dict
    print(data)