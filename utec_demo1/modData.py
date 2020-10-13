import os


def valdata(nombreArchivo):
    existe = os.path.exists(nombreArchivo)
    return existe


def loaddata(nombreArchivo):
    filas = []
    dic_respuesta = {'cabecera': [], 'filas': [], 'size': 0}
    existe = os.path.exists(nombreArchivo)
    if existe:
        file = open(nombreArchivo, "r")
        num_linea = 0
        primera_linea = False
        cabecera = []
        while True:
            theline = file.readline().rstrip()
            if len(theline) == 0:
                break
            elif not primera_linea:
                cabecera = theline.split(',')
                dic_respuesta['cabecera'] = cabecera
                dic_respuesta['size'] = 0
                primera_linea = True
            else:
                dic = {}
                lista = theline.split(',')
                for i in range(len(cabecera)):
                    nombre = cabecera[i]
                    valor = lista[i]
                    dic[nombre] = valor
                # end for
                filas.append(dic)
                num_linea += 1
        # end while
        # entrega de diccionario con lista de diccionarios
        dic_respuesta['filas'] = filas
        dic_respuesta['size'] = num_linea
        file.close()
        return dic_respuesta
# end def
