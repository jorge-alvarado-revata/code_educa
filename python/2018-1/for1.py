n = int(input("ingrese n:"))
m = int(input("ingrese step:"))
suma = 0
for e in range(0, n+1, m):
    suma = suma + e
    print(e, end=' ')
print()
print("la suma desde 0 hasta", n, "es:", suma)
