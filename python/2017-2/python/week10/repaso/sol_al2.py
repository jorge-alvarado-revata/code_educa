"""
2. Que genere el producto de numeros impares de 1 hasta N
"""
N = int(input())
inicio = 1
producto = 1
while inicio <= N:
    producto = producto * inicio
    inicio = inicio + 2

print(producto)


