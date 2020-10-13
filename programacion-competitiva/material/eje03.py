# http://acm.timus.ru/problem.aspx?space=1&num=1014

def divisores(N):
    divisores = []
    for i in range(9, 1, -1):
        while N % i == 0:
            divisores.append(i)
            N = N // i

    return divisores


def producto(divisores):
    producto = 1
    for x in divisores:
        producto = producto * x
    return producto

N = int(input())

if N == 0:
    print('10')
elif N == 1:
    print('1')
elif  N > 1:
    div = divisores(N)
    div = div[::-1]
    div = sorted(div)
    prod = producto(div)
    s = ''

    if prod == N:
        for e in div:
            s += str(e)
        print(s)
    else:
        print(-1)

