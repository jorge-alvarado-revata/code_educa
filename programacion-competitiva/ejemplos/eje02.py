# Sensacion termica

"""
Dada una temperatura T y la velocidad del viento V, el SENAMI define la sensacion termica como la siguiente formula

w = 35.74 + 0.6215*t + (0.4275*t - 35.75)*(v a la potencia de 0.16)

Escribir un programa que tome dos números flotantes t y v e imprima el valor de la sensacion termica

El programa dara 0 si el valor de t es menor a 1  o es mayor a 50 o si v es mayor a 120 o si v es menor a 3.

"""

import math

t = float(input())
v = float(input())

if (t > 1 and t < 50) and (v > 3 and v < 120):
    resp = 35.74 + 0.6215*t + (0.4275*t - 35.75)* math.pow(v, 0.16)
else:
    resp = 0

print('%.2f' % resp)
