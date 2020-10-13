import time
import random

def selection(lista):
    for i in range(len(lista)):
        min = i
        for j in range(i, len(lista)):
            if lista[j] < lista[min]:
                min = j
            lista[i], lista[min] = lista[min], lista[i]


N = int(input())
lista = []


for i in range(N):
    lista.append(random.randint(-10000, 10000))

print(lista)
t0 = time.time()
selection(lista)
t1 = time.time()
print(lista)

print(t1-t0)
