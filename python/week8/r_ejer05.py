# Escribir una función recursiva sume los elementos de una lista

def suma_lista(l):
    if len(l) == 0:
        return 0
    if len(l) == 1:
        return l[0]
    if len(l) == 2:
        return l[0] + l[1]
    elif len(l) > 2:
        return suma_lista(l[1:]) + l[0]
