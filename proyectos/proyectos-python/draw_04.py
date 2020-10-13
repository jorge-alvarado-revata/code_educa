import stddraw as d
import sys

N = int(input())

d.setXscale(0, N)
d.setYscale(0, N)

for i in range(N):
    for j in range(N):
        if ((i + j) % 2) != 0:
            d.setPenColor(d.BLACK)
        else:
            d.setPenColor(d.RED)
        d.filledSquare(i + .5, j + .5, .5)
        
d.show(0)




