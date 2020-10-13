"""
Implementacion no recursiva
de A a la N
"""

a = int(input())
n = int(input())

def power(a, n):
    ret = 1
    for i in range(1, n+1):
        ret *= a
    return ret

def power2(a, n):
    ret = 1
    while n > 0:

        if n % 2 == 1:
            ret *= a
        a *= a
        n //= 2
    return ret

print(power(a, n))
print(power2(a, n))


