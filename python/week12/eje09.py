# matrix con muchos eros con diccionarios y tuplas
matrix = {(0, 3): 1, (2, 1): 1, (4, 3): 1}

valor = matrix[(0, 3)]

#print(valor)

#valor = matrix[(1, 3)]

valor = matrix.get((1, 3), 0)

print(valor)
