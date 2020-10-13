"""
Encontrar los multiplos de un numero.
"""
N = int(input())

def suma_divisores(N):
    suma = 0
    for x in range(1, N):
        if N % x == 0:
            suma += x
    return suma

if suma_divisores(N) == N:
    print("1")
else:
    print("0")
