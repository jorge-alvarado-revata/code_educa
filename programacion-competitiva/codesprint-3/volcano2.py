#!/bin/python3

# https://www.hackerrank.com/contests/university-codesprint-3/challenges/erupting-volcanoes/problem


n = int(input().strip())
m = int(input().strip())


ele = []

for a0 in range(m):
    x, y, w = input().strip().split(' ')
    x, y, w = [int(x), int(y), int(w)]
    ele.append([x, y, w])


def dist(t1, t2):

    x1, y1 = t1
    x2, y2 = t2

    d = max(abs(x2-x1), abs(y2-y1))

    return int(d)

col = []
item = []
for x in range(0, n):
    for y in range(0, n):
        value = 0
        col.append(value)
    item.append(col)
    col = []


for e in ele:

    for x in range(0, n):
        for y in range(0, n):

            if x == e[0] and y == e[1]:
                item[x][y] = e[2]
            else:
                d = dist((x, y), (e[0], e[1]))
                if e[2] - d > 0:
                    item[x][y] += (e[2] - d)
                else:
                    item[x][y] += 0

result = []
for x in range(0, n):
    for y in range(0, n):
        result.append(item[x][y])

imax = max(result)

print(imax)
