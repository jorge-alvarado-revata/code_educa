"""
2. Que genere el producto de numeros impares de 1 hasta N
"""
N = int(input())

def prod(N):
    inicio = 1
    producto = 0
    while inicio <= N:
        producto = producto * inicio
        inicio = inicio + 2
    return producto

producto = prod(N)
print(producto)
