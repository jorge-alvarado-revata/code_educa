# Factorizacion de un entero

N = int(input())

i = 2
while i <= (N // i):

    while N % i == 0:
        N //= i
        print(i, ' ', end = '')
    i += 1
    
if N > 1:
    print(N, ' ', end = '')
print()
