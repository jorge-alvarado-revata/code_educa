# algoritmo de burbuja

import random
import time
def bubble(lista):
    for j in range(len(lista)-1, 0, -1):
        for i in range(j):
            if lista[i] > lista[i+1]:
                lista[i], lista[i+1] = lista[i+1], lista[i]

N = int(input())
lista = []


for i in range(N):
    lista.append(random.randint(-10000, 10000))


print(lista)
t0 = time.time()
bubble(lista)
t1 = time.time()
print(lista)

print(t1-t0)
