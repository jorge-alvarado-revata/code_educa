import stddraw as d
import math
N = int(input())


x = []
y = []

for i in range(0, N):
    x.append(math.pi*i/N)

for i in range(0, N):
    y.append(math.sin(4*x[i]) + math.sin(20*x[i]))


d.setXscale(0, math.pi)
d.setYscale(-2.0, 2.0)

for i in range(1, N):
    d.line(x[i-1], y[i-1], x[i], y[i])
d.show(0)



# ingrese en la consola valores tales como 20 o 100 o 200
