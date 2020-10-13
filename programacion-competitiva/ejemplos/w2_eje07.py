# el problema de 3n +1


def seq(n):
    cont = 1

    while n!=1:
        cont += 1
        if n % 2 == 0:
            n //= 2
        else:
            n = n * 3 +1

    return cont

def max_lon(i, j):

    max = 0
    value = 0

    for i in range(i, j + 1):
        value = seq(i)
        if value > max:
            max = value

    return max

s = input()
l = s.split(' ')

res = max_lon(int(l[0]), int(l[1]))

print('{} {} {}'.format(l[0], l[1], res))
