key = ''
frutas = {}
while key != '*':
    key = input('ingrese nombre de fruta:')
    valor = int(input('ingrese precio:'))
    if key != '*':
        frutas[key] = valor

for k in frutas.keys():
    frutas[k] = frutas[k] * 1.18

print('tabla de precios')
for k, v in frutas.items():
    print(' {:>10} {:>10}'.format(k,v))
