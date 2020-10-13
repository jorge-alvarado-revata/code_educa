# matrices con muchos ceros con listas

matrix = [[0, 0, 0, 1, 0],
          [0, 0, 0, 0, 0],
          [0, 2, 0, 0, 0],
          [0, 0, 0, 0, 0],
          [0, 0, 0, 3, 0]]

for i in matrix:
    for j in i:
        print(j, end=' ')
    print()