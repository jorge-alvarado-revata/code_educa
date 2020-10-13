"""
4. Que genere los multiplos de un numero N hasta M.
5. Que genere una secuencia entre los numeros X e Y.
"""
N = int(input())
M = int(input())
inicio = N

while inicio <= M:
    print(inicio, end= ' ')
    inicio = inicio + N

