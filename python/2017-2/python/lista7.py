def delEle(L, x):
    continuar = True
    if x in L:
        while continuar:
            L.remove(x)
            if not x in L:
                continuar = False


L = [1, 2, 4, 5, 6, 6, 7, 8 , 8, 3]

print(L)
delEle(L, 8)
print(L)
