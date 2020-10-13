import math

def fnorma(s):
    l = sum([int(x)**2 for x in s])**0.5
    return l

def fnorma2(s):
    enteros = []
    for x in s:
        enteros.append(int(x))
    suma = 0
    for x in enteros:
        suma = suma + x**2
    norma = math.sqrt(suma)
    return norma


s = input().split(' ')
print(fnorma(s))
