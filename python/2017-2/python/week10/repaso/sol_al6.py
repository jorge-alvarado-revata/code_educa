"""
Encontrar los multiplos de un numero.
"""
N = int(input())

def divisores(N):
    for x in range(1, N):
        if N % x == 0:
            print(x, end= ' ')

divisores(N)
