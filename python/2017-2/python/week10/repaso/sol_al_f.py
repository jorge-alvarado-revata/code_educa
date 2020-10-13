"""
1.Que genere una secuencia de numeros pares de 2 hasta N
"""

def sec(N):
    inicio = 2
    while inicio <= N:
        print(inicio, end=' ')
        inicio = inicio + 2


N = int(input())
sec(N)

