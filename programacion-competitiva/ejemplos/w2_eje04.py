"""
Calcular la suma de los cubos del 1 hasta N
"""
import  math

N = int(input())
suma = math.pow(1 / 2 * N * ( N + 1), 2)

print(int(suma))
