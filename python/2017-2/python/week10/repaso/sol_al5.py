"""
5. Que genere una secuencia entre los numeros X e Y.
"""
X = int(input())
Y = int(input())
inicio = X
"""
while inicio <= Y:
    print(inicio, end= ' ')
    inicio = inicio + 1
"""
for i in range(X, Y + 1):
    print (i)

