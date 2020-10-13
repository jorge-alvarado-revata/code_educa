import stddraw as d

N = 20
d.setXscale(0, N)
d.setYscale(0, N)

d.circle(10, 10, 10)

for i in range(1, 10):
    d.circle(10, 10, 10-i)
    d.show(1000)
