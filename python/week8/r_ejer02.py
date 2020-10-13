# crear una funcion recursiva que devuelva un numero 'a' elevado a la potencia 'b'
def potencia(a, b):

    if b == 1:
        return a
    else:
        return a * potencia(a, b-1)
