"""
1.Genere una lista de numeros pares de 2 hasta N
"""
N = int(input())
L = []
inicio = 2
while inicio <= N:
    L.append(inicio)
    inicio = inicio + 2

print(L)
