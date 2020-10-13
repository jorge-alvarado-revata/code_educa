precios_frutas = {'albaricoque':6,
                  'melon': 4,
                  'papaya': 6,
                  'platano': 3,
                  'maracuya': 10}

precios_frutas['sandia'] = 10
precios_frutas.update({'amaranto':5, 'zapote': 13})
precios_frutas['albaricoque'] = 7

print(precios_frutas['albaricoque'])

print(precios_frutas)
# valor
print("keys")
for k in precios_frutas:
    print(k, end = ' ')
print()
print("values")
for v in precios_frutas.values():
    print(v, end=' ')
# recorrido por keys
for k in precios_frutas.keys():
    print('por la fruta "{}"'.format(k),
          'tiene el precio de:{}'.format(precios_frutas[k]))
# recorrido por keys y valor
for k, v in precios_frutas.items():
    print('por la fruta "{}"'.format(k),
          'tiene el precio de:{}'.format(v))
