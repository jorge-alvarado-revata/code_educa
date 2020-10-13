import stddraw as d

N = 50

d.setXscale(0, N)
d.setYscale(0, N)

for x in range(0, N):
    d.line(0, N-x, x, 0)

d.show(0)




