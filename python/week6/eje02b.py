s = [1, 2, 3, 4, 5, 6, 7, 8]
t = s # en esta linea t hace refencia a s
t = s[:] # hice una copia de la lista
t[0] = 0
t[7] = 1
print(s)
n = len(s)
# por indice
for indice in range(0, n):
    print(s[indice], end=' ')

print()
# por valor

for valor in s:
    print(valor, end= ' ')





