import datetime
import requests
from pprint import pprint


def getPasado(n):
    ahora = datetime.date.today()
    fecha_pasada = ahora - datetime.timedelta(days=n)
    return str(fecha_pasada)


def getDateNDays(n):
    ahora = datetime.date.today()
    fecha_futura = datetime.timedelta(days=n) + ahora
    return str(fecha_futura)


def getHoy():
    ahora = datetime.date.today()
    return str(ahora)


def getLvlNub(indice):
    print(indice)
    if indice >= 75:
        return 3
    if indice >= 50:
        return 2
    if indice >= 25:
        return 1
    return 0


def sortActual(arr):
    n = len(arr)
    for i in range(n):
        min_idx = i
        for j in range(i+1, n):
            if arr[j]["datetime"] > arr[min_idx]["datetime"]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    return arr


def mostrarNubosidadDias(n):
    """
    2023-04-19  2023-04-20
    city = input("Enter your city:  ")
    """
    start_date = getPasado(n)
    end_date = getPasado(0)

    url = "https://api.weatherbit.io/v2.0/history/daily?lat=-8.109052&lon=-79.021534&start_date=" + start_date + \
          "&end_date=" + end_date + "&key=33fc4000289842e29f12d4fc019fb617"

    respuesta_url = requests.get(url)
    datos_en_yeison = respuesta_url.json()
    print("Respuesta del API")
    print(datos_en_yeison)

    ciudad = datos_en_yeison["city_name"]
    datos_en_yeison = datos_en_yeison["data"]

    dias = len(datos_en_yeison)
    datos_en_yeison = sortActual(datos_en_yeison)
    last_day = datos_en_yeison[0]["datetime"]

    print("Datos ordenados por fecha")
    print(datos_en_yeison)

    logs_base_datos = open("{}_data_{}days_{}_logs.txt".format(ciudad, dias, last_day), "w")

    base_datos.write("a {}". format(datos_en_yeison))

    base_datos = open("{}_data_{}days_{}.txt".format(ciudad, dias, last_day), "w")

    print("ciudad: ", ciudad)
    for e in range(len(datos_en_yeison)):
        indice_nuboso = datos_en_yeison[e]["clouds"]
        #lvl_nubosidad = getLvlNub(indice_nuboso)       PROCESABA INFORMACION 0,1,2,3
        #base_datos.write(str(lvl_nubosidad) + "\n")

        base_datos.write(str(indice_nuboso)+ "\n")    # RETORNA EL INDICE

        print("El dia {} fue procesado".format(datos_en_yeison[e]["datetime"]))

def printhellowrord():
    a = open("holamundo.txt", "w")
    a.write("hola mundo")

if __name__ == '__main__':
    printhellowrord()
