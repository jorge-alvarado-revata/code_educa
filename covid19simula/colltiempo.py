from datetime import datetime
from datetime import timedelta



from model import IntervaloTiempo
from model import PersonaPositivo
from model import Persona
from model import PersonaPosicionTiempo
from model import PosicionTiempo
from model import GeoPunto



class CollectionIntervaloTiempo(object):
    def get_intervalos(self, fecha_inicio, fecha_fin):
        list_intervalo_tiempo = []
        dt_fecha_inicio = datetime.strptime(fecha_inicio, '%d-%m-%Y %H:%M:%S')
        dt_fecha_fin = datetime.strptime(fecha_fin, '%d-%m-%Y %H:%M:%S')
        i = 1
        while dt_fecha_inicio < dt_fecha_fin:
            dt_min = dt_fecha_inicio
            dt_max = dt_fecha_inicio + timedelta(minutes=5)
            obj = IntervaloTiempo(i, dt_min, dt_max)
            dt_fecha_inicio = dt_max
            i += 1
            list_intervalo_tiempo.append(obj)
        return list_intervalo_tiempo

