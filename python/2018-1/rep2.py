x = int(input("ingrese un numero par:"))

while x % 2 != 0:
    x = int(input("ingrese un numero par:"))

n = 2
while n <= x:
    print(n)
    n = n + 2
