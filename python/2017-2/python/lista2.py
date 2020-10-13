import random

L = []
lpares = []
limpares = []

for i in range(1, 51):
  valor = random.randint(1, 100)
  L.append(valor)

print(L)

for v in L:
  if v % 2 == 0:
    lpares.append(v)
  else:
    limpares.append(v)


print("lista de pares: ", lpares)
print("lista de impares: ", limpares)
