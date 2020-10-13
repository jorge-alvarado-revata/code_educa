# calculo de la raiz cuadrada

EPSILON = 1e-15

c = float(input('ingrese numero a calcular la raiz: '))

t = c
while abs(t-c/t) > (EPSILON * t):
    # reemplazamos t por el promedio de t y c/t
    t = (c/t + t) / 2.0

print(t)
