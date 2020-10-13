"""
Calcular la suma de los cubos del 1 hasta N
"""

suma = 0

N = int(input())

for i in range(1, N+1):
    suma += i * i * i

print(suma)
