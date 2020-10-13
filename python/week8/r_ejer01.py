# implementar el factorial recursivo

def factorial_iterativo(n):
    res = 1
    for i in range(1, n + 1):
        res *= i
    return res

def factorial(n):
    if n <= 1 :
        return 1
    if n > 1:
        return n * factorial(n-1)
