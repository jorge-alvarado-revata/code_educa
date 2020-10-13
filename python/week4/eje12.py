"""
Escribir un programa donde se ingrese un numero y que retorne la suma de los dígitos de un número sin importar el tamaño del mismo.

Por ejemplo:

Input: 123456789

Output: 45

"""

x = int(input())

suma = 0
while x > 0:
    factor = 10
    suma += x % factor
    x = x // factor

print(suma)

