"""
Realice un programa que permita elevar una base entera a un exponente entero
(sin utilizar el operador de potencia **)

"""

base = int(input())
exponente = int(input())

acumulador = 1
contador = 1

while contador <= exponente:
    acumulador = acumulador * base

print('la potencia es: ')
