"""
Escribir un programa que solicite una cantidad (n) y que calcule el factorial de un número. Por ejemplo:

n: 8

El Factorial es: 40320


"""
n = int(input())

if n == 0:
    factorial = 1
else:
    contador = 1
    factorial = 1

    while contador <= n:
        factorial = 0 # reemplazar esta linea por una expresion correcta.
        contador += 1

print(factorial)
