import random

L = []

letras = ['a', 'b', 'c', 'd', 'z']


for i in range(1, 30):
  v = random.randint(0, 4)
  L.append(letras[v])


print(L)
