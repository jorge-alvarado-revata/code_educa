# metodos en diccionarios 2

edades = {'juan': 20, 'manuel': 19, 'susana': 19, 'teresa': 21}

edades['juan'] += 2

for k, v in edades.items():
    print('con indice "{}"'.format(k), 'valores:{}'.format(v))