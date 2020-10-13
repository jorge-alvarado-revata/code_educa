"""
3. Que genere el factorial de un numero.
"""

N = int(input())
inicio = 1
fin = N +1
factorial = 1
for factor in range(inicio, fin):
    factorial = factorial * factor

print(factorial)
