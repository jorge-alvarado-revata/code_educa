# Escribir una funcion recursiva que encuentre el mayor elemento de una lista
def mayor(l):

    if len(l) == 0:
        return 0
    if len(l) == 1:
        return l[0]

    if len(l) == 2:
        return l[0] if l[0] > l[1] else l[1]

    if len(l)> 2:
        m = l[0] if l[0] > l[1] else l[1]
        if m > l[2]:
            t = l[2]
            l[2] = m
            return mayor(l[2:])
        else:
            return mayor(l[2:])





l = [100, 20, 8, 12, 5, 3, 101, 32, 33, 14, 99]

print(mayor(l))
