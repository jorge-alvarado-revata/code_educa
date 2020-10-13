
def factorial(n):
    prod = 1
    for i in range(1, n+1):
        prod = prod * i

    return prod

def combinatoria(n, k):
    if n >=k:
        comb = factorial(n)/(factorial(k)*factorial(n-k))
        comb = int(comb)
        return comb
    else:
        return 0

print(combinatoria(8,3))
