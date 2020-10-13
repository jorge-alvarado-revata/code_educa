n = -1
numeros = []
while n!=0:
    n = int(input())
    if n !=0:
        numeros.append(n)

producto = 1
for x in numeros:
    producto = producto*x

print(producto)
