# Escribir una función recursiva que genere el resultado de la división entera del número a y b por restas sucesivas.

def division_entera(a, b):
    if b > a:
        return 0
    return division_entera(a - b, b) + 1
