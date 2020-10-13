#ordenacion de una lista
import random
L = []
for i in range(1, 10):
    v = random.randint(1, 100)
    L.append(v)

print("Lista original: ", L)
print("Lista ordenada sin modificar L:", sorted(L))


T = L[:] # copia la lista L en T

L.sort()
print("Lista ordenada modificando L: ", L)

T.reverse()
print("Invierte T:", T)
