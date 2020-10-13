"""
Escribir un programa que solicite un numero (n) que represente el multiplo  y otro numero adicional
que represente el límite (lim) y que muestre todos los divisores de un número hasta el límite indicado. Por ejemplo:

multiplo: 5
Limite: 50

Resultado: 0  5  10  15  20  25  30  35  40  45  50

"""

multiplo = int(input())
limite = int(input())

contador = 0

while multiplo <= limite:
    # falta una linea
    print(multiplo, ' ', end='')
    contador += 1 # contador = contador + 1
