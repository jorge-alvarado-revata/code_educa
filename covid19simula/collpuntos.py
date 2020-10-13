import random
from shapely.geometry import Point
from model import GeoPunto


class CollectionGeoPoint(object):

    def get_random_point_in_polygon(self, poly, numberpoint):
        minx, miny, maxx, maxy = poly.bounds
        contador = 1
        lista_puntos = []
        while contador <= numberpoint:

            p = Point(random.uniform(minx, maxx), random.uniform(miny, maxy))
            if poly.contains(p):
                contador += 1
                lista_puntos.append(p)
        return lista_puntos


