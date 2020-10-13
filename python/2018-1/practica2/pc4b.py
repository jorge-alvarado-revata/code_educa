#problema de la diferencia de (suma de cuadrados - suma de numeros al cuadrado)

N = int(input())

suma1 = 0
suma2 = 0

for x in range(1, N+1):
    suma1 = suma1 + x

for y in range(1, N+1):
    suma2 = suma2 + y**2

S  = suma1**2
M  =suma2

print(S-M)
