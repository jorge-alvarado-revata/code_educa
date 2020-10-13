# exponencacion rapida recursiva
"""
Calcular  A a la N
"""
a = int(input())
n = int(input())

def power(a, n):
    if n == 0:
        return 1
    if n == 1:
        return a
    if n % 2 == 0:
        m = power(a, n / 2 )
        return m * m
    if n % 2 != 0:
        m = power(a, n-1)
        return a * m

print(power(a, n))

