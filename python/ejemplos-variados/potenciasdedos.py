# aceptar un entero positivo y escribir un tabla con las primeras potencias del 2.

potencia = 1

i = 0

n = int(input('ingrese el valor de n: '))

while i <= n:
    print(str(i) + '    ' + str(potencia))
    potencia *= 2
    i += 1
