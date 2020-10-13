# metodos en diccionarios

precios_frutas = {'albaricoque':6, 'melon': 4, 'papaya': 6, 'platano': 3, 'maracuya': 10}

precios_frutas['sandia'] = 10

precios_frutas.update({'cereza':5})

precios_frutas['albaricoque'] = 7

for k in precios_frutas.keys():
    print('por la fruta "{}"'.format(k), 'tiene el precio de:{}'.format(precios_frutas[k]))