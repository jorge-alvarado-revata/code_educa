# metodos en diccionarios

edades = {'juan': 20, 'manuel': 19, 'susana': 19, 'teresa': 21}

edades['juan'] += 2

for k in edades.keys():
    print('con indice "{}"'.format(k), 'valores:{}'.format(edades[k]))
