"""
Escribir un programa para calcular la suma de los cuadrados de 1 hasta N

"""

N = int(input())

suma = 0

for i in range(1, N+1):
    suma += i * i

print(suma)
