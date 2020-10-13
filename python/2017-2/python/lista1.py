N = 1
x = 0
L = []

#leer 10 elementos enteros con input
print('ingresa los datos:')
while N <= 10:
  x = int(input())
  L.append(x)
  N = N+1
print(L)

#lista de 10 elementos
L = [1, 2, 3, 4 ,5, 6, 7, 8 ,9 ,10]

#suma de elementos
suma = 0
for i in L:
    suma = suma + i

#calculo del promedio
print(suma)
promedio = suma / len(L)
print(promedio)

#mayores al promedio
for i in L:
    if i > promedio:
        print (i, end= ' ')



print(sum(L))



