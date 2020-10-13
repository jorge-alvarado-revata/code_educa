from datetime import datetime
from datetime import timedelta

# Creamos el objeto intervalo
class IntervaloTiempo(object):
    def __init__(self, t_indice, t_min, t_max):
        self.t_indice = t_indice
        self.t_min = t_min
        self.t_max = t_max

    def __str__(self):
        return "[{}, {}, {}]".format(self.t_indice, self.t_min, self.t_max)


class GeoPunto(object):
    def __init__(self, id_geopunto, lat, lon):
        self.id_geopunto = id_geopunto
        self.lat = lat
        self.lon = lon


    def __str__(self):
        return "[{}, {}]".format(self.lat, self.lon)

class Estado(object):
    def __init__(self, id_estado, valor):
        self.id = id_estado
        self.valor = valor

class TipoUbicacion(object):
    def __init__(self, id_ubicacion, descripcion):
        self.id = id_ubicacion
        self.descripcion = descripcion

class Persona(object):
    def __init__(self, id_persona, numero_celular, id_estado, id_ubicacion, prob_contagio):
        self.id = id_persona
        self.numero_celular = numero_celular
        self.id_estado = id_estado
        self.id_ubicacion = id_ubicacion
        self.prob_contagio = prob_contagio

class PosicionTiempo(object):
    def __init__(self, tiempo, id_intervalotiempo, id_geopunto):
        self.tiempo = tiempo
        self.id_intervalotiempo = id_intervalotiempo
        self.id_geopunto = id_geopunto

class PersonaPosicionTiempo(object):
    def __init__(self, id_persona, id_posicion_tiempo):
        self.id_persona = id_persona
        self.id_posicion_tiempo = id_posicion_tiempo

class Densidad_Probabilidad(object):
    def __init__(self, d_x, d_y, valor):
        self.d_x = d_x
        self.d_y = d_y
        self.valor = valor

class DatosGenerales(object):
    def __init__(self, id_dg, valor):
        self.id_dg = id_dg
        self.valor = valor

class PersonaPositivo(object):
    def __init__(self, id_persona, fecha_prob_contagio, fecha_contactominsa, fecha_toma_test, fecha_conftest):
        self.id_persona = id_persona
        self.fecha_prob_contagio = fecha_prob_contagio
        self.fecha_contactominsa = fecha_contactominsa
        self.fecha_toma_test = fecha_toma_test
        self.fecha_conftest = fecha_conftest

