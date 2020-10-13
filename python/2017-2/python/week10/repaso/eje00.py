"""
1. si N es par o no
2. generar una secuencia de #impares
3. factorial de N
4. sumatoria
"""
def factorial(inicio):
    fact = 1
    for x in range(1, inicio + 1):
        fact = fact * x
    return fact

N = int(input())
suma = 0
if N % 2 == 0:
    N = N-1

inicio = 1
while inicio <= N:
    fact = factorial(inicio)
    suma = suma + fact
    inicio  = inicio + 2

print(suma)
