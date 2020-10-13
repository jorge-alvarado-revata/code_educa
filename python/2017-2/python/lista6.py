#eliminar la ocurrencia de un elemento

L = [1, 2, 4, 5, 6, 6, 7, 8 , 8, 3]

print(L)

continuar = True
x = 8
if x in L:
    while continuar:
        L.remove(x)
        if not x in L:
            continuar = False

print(L)

