
# Crear una lista de 10 edades de un nido.
edades = [2, 3, 4, 5, 3, 2, 4, 5, 2, 4]
# Adicionar 4 edades al final de la lista.
edades.append(3)
edades.append(2)
edades.append(4)
edades.append(5)
# Adicionar 4 edades contando desde 1 en posiciones impares.

edades.insert(1, 2)
edades.insert(3, 3)
edades.insert(5, 4)
edades.insert(7, 2)


edadesadicionales = [2, 3, 4, 4]

cont = 0
for x in range(1,8,2):
    valor = edadesadicionales[cont]
    edades.insert(x, valor)
    cont = cont+1


edades.insert(1, 3)
edades.insert(3, 4)
edades.insert(5, 3)
edades.insert(7, 3)
# Eliminar el ultimo elemento.

edades.pop()

# Calcular la suma de todas las edades.
suma = sum(edades)
# Imprimir las edades menores al promedio.
promedio = sum(edades)/len(edades)

for x in edades:
    if x < promedio:
        print(x, end=' ')
# Imprimir las edades mayores al promedio.
for x in edades:
    if x > promedio:
        print(x, end=' ')
# Imprimir el menor elemento.
print(min(edades))
# Imprimir el mayor elemento.
print(max(edades))
# Buscar la edad igual al promedio.

if int(promedio) in edades:
    pos = edades.index(int(promedio))
    print(edades[pos])

# Eliminar los elementos en posición par.
pos = 0
edades2 = edades.copy()
while pos <= int(len(edades2)/2)+1:
    edades2.pop(pos)
    pos = pos + 1
