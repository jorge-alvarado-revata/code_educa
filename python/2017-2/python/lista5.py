"""
5. Que genere una secuencia entre los numeros X e Y.
"""
X = int(input())
Y = int(input())
inicio = X

L = []

for i in range(X, Y + 1):
    L.append(i)


print(L)
