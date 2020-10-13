import math

def suma_pot(a, b):
        if b == 1:
            return math.pow(a, b)
        else:
            return math.pow(a, b) + suma_pot(a, b-1)

print(suma_pot(2, 4))
