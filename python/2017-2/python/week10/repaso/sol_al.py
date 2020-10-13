"""
1.Que genere una secuencia de numeros pares de 2 hasta N
"""
N = int(input())
"""
for x in range(2, N+1, 2):
    print(x)
"""
inicio = 2
while inicio <= N:
    print(inicio, end=' ')
    inicio = inicio + 2
