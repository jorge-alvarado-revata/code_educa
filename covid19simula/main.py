from colltiempo import CollectionIntervaloTiempo
from collpuntos import CollectionGeoPoint
from shapely.geometry import Polygon
from geopy.distance import geodesic


def main():
    # Esto crea los intervalos de tiempo de medicion de las posiciones GPS
    data = CollectionIntervaloTiempo()
    lista = data.get_intervalos('01-04-2020 01:00:00', '05-04-2020 20:00:00')

    # [print(x) for x in lista]

    # Esta simulacion es para encontrar puntos cercanos en un intervalo de tiempo
    # se deberá repetir para la busqueda en distintos intervalos de tiempo

    puntos = CollectionGeoPoint()

    # El ejemplo
    # coordenadas del distrito de magdalena

    coords = ((-77.06314261129832, -12.0865429798887160), (-77.05498436129066, -12.091886729893709),
              (-77.06070898629605, -12.107660104908401),
              (-77.07767573631195, -12.09557622989714), (-77.07210348630672, -12.083583979885987),
              (-77.06314261129832, -12.086542979888716))

    magdalena = Polygon(coords)

    # puntos aleatorios dentro del distrito de magdalena
    point_in_magdalena = puntos.get_random_point_in_polygon(magdalena, 100)

    # puntos en una lista de tuplas de los puntos
    espacio_busqueda = [(p.x, p.y) for p in point_in_magdalena]

    # puntos que simulan un desplazamiento en un intervalo de tiempo
    # Se usa luego
    ubicaciones = [(-12.087990, -77.065630), (-12.087428, -77.066693), (-12.086914, -77.068120),
                   (-12.087554, -77.068935)]

    # Datos proximos 500 metros de un punto (-12.087990, -77.065630)
    espacio_busqueda_geomid = [(-12.09077242, -77.06005138),
                               (-12.08247295, -77.07231749),
                               (-12.09027093, -77.06860914),
                               (-12.08936202, -77.05815422),
                               (-12.08645405, -77.07374903),
                               (-12.08462089, -77.06468707),
                               (-12.08923917, -77.06414314),
                               (-12.09528153, -77.06079877),
                               (-12.09529475, -77.06904636),
                               (-12.09226346, -77.07196642),
                               (-12.09037201, -77.06597065),
                               (-12.08781449, -77.06792772),
                               (-12.08908125, -77.06244905),
                               (-12.08700911, -77.06243975),
                               (-12.09084483, -77.0620959),
                               (-12.08736611, -77.06740803),
                               (-12.0884723, -77.06881192),
                               (-12.08740218, -77.06306042),
                               (-12.08633347, -77.06745286),
                               (-12.08495001, -77.06355397),
                               (-12.08925542, -77.06992786),
                               (-12.08396689, -77.06697788),
                               (-12.0882465, -77.06566694),
                               (-12.08862, -77.06667337),
                               (-12.08798808, -77.06588002),
                               (-12.0910837, -77.06828341),
                               (-12.0852024, -77.06879838),
                               (-12.08583434, -77.06888215),
                               (-12.08833492, -77.06892205),
                               (-12.08517255, -77.06241865),
                               (-12.09007025, -77.06949322),
                               (-12.08995424, -77.06895298),
                               (-12.09090286, -77.0634559),
                               (-12.08984923, -77.06282857),
                               (-12.08703323, -77.06779855),
                               (-12.08740815, -77.0684857),
                               (-12.09065893, -77.06780431),
                               (-12.08560587, -77.06868119),
                               (-12.08738511, -77.06854882),
                               (-12.08492246, -77.06233239),
                               (-12.08478523, -77.06499572),
                               (-12.0835431, -77.06550694),
                               (-12.08757863, -77.06117338),
                               (-12.08991881, -77.06818201),
                               (-12.08733246, -77.06888404),
                               (-12.08812989, -77.06867209),
                               (-12.08953184, -77.06588824),
                               (-12.08460794, -77.06546381),
                               (-12.08790468, -77.06615865),
                               (-12.0898119, -77.0619267),
                               (-12.08994334, -77.06627973),
                               (-12.08479841, -77.06738543),
                               (-12.08960525, -77.06968701),
                               (-12.08630548, -77.06509032),
                               (-12.08521833, -77.06282042),
                               (-12.08626617, -77.06919624),
                               (-12.08697434, -77.06701367),
                               (-12.08744672, -77.06129406),
                               (-12.08615274, -77.06656415),
                               (-12.08691827, -77.06729226),
                               (-12.08790468, -77.06615865)]

    # Crear la tabla de probabilidad con valores para distancias
    # menor o igual a 20 metros : probabilidad 0.5
    # menor o igual a 30 metros: probabilidad 0.3 ...

    densidad_prob = {20: 0.5, 30: 0.3, 50: 0.1, 60: 0.1}

    # funcion que acumula probabilidad diferencial
    def funcion_delta_prob(prob, newprob):
        return round(float(prob + newprob * (1 - prob)), 2)

    # lista de positivos con covid.
    positivos = [(-12.087990, -77.065630)]

    # Aqui ira un bucle o recorrido por la posicion en un tiempo t1 de un caso positivo
    p1 = positivos[0]

    # encontrar todos los puntos menores a 60m de un punto
    lista_contactos_en_area = []
    #for p2 in espacio_busqueda:        # espacio_busqueda fueron puntos aleatorios en
                                        # el distrito
    for p2 in espacio_busqueda_geomid:  # busqueda_geomid tiene puntos en 600 metro cercano
        distancia = geodesic(p1, p2).meters
        if distancia <= 60.00:
            contactos_en_area = {}
            contactos_en_area['distancia'] = distancia
            contactos_en_area['posicion'] = p2
            contactos_en_area['prob'] = 0.0
            lista_contactos_en_area.append(contactos_en_area)

    #Aqui se puede recorrer todos los contactos encontrados
    # y actualizar las probabilidades de contagio
    # Recorremos todos los puntos cercanos que podrían ser repetidos
    # Se ha puesto un punto repetido
    # por lo que la probabilidad se acumula segun la formula de la probabilidad diferencial

    dict_contacto_prob = {}
    for contactos_en_area in lista_contactos_en_area:
        if 0.0 <= contactos_en_area['distancia'] < 20.0:
            prob = densidad_prob[20]
            key_contacto_prob = contactos_en_area['posicion']
            prob_actual = dict_contacto_prob.get(key_contacto_prob, 0.0)
            dict_contacto_prob[key_contacto_prob] = funcion_delta_prob(prob_actual, prob)

        elif 20.0 <= contactos_en_area['distancia'] < 30.0:
            prob = densidad_prob[30]
            key_contacto_prob = contactos_en_area['posicion']
            prob_actual = dict_contacto_prob.get(key_contacto_prob, 0.0)
            dict_contacto_prob[key_contacto_prob] = funcion_delta_prob(prob_actual, prob)

        elif 30.0 <= contactos_en_area['distancia'] < 50.0:
            prob = densidad_prob[50]
            key_contacto_prob = contactos_en_area['posicion']
            prob_actual = dict_contacto_prob.get(key_contacto_prob, 0.0)
            dict_contacto_prob[key_contacto_prob] = funcion_delta_prob(prob_actual, prob)

        elif 50.0 <= contactos_en_area['distancia'] < 60.0:
            prob = densidad_prob[60]
            key_contacto_prob = contactos_en_area['posicion']
            prob_actual = dict_contacto_prob.get(key_contacto_prob, 0.0)
            dict_contacto_prob[key_contacto_prob] = funcion_delta_prob(prob_actual, prob)


    # muestra los contactos cercanos con
    # la probabilidad de contagio de los contactos del punto (-12.087990, -77.065630)
    [print(k,v) for k,v in dict_contacto_prob.items()]

    return 0


main()

