# función factorial

def factorial(n):

    if n == 0:
        return 1
    elif n == 1:
        return 1
    else:

        producto = 1

        for i in range(1, n+1):
            producto = producto*i

        return producto


print(factorial(1))
