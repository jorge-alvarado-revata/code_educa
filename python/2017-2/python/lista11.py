def buscar_letra(L, x):
    if x in L:
        cont=0
        for u in L:
            if u == x:
                break
            cont = cont + 1
    return cont

Letras = ['A', 'B', 'C', 'D']

Encriptado = ['#', '$', '%', '&']

#programa principal
s = input()

for x in s:
    pos = buscar_letra(Letras, x)
    print(Encriptado[pos])

