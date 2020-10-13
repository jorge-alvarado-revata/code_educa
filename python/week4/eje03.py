"""
Escribir un programa que permita leer 7 valores que representan a las notas de un examen.
El programa debe calcular el promedio e imprimirlo.
"""

TOTAL_NOTAS = 7

contador = 1
total = 0

while contador <= 7:
    nota = float(input('ingrese la nota ' + str(contador) + ': '))
    total += nota
    contador += 1

promedio = total / TOTAL_NOTAS

print(promedio)
# print("El promedio es: {:5.2f}".format(promedio))
