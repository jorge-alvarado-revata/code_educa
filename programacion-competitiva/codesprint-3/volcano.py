#!/bin/python3

# https://www.hackerrank.com/contests/university-codesprint-3/challenges/erupting-volcanoes/problem

n = int(input())
m = int(input())

sinput = []
dict_w = {}
dict_v = {}

for x in range(0, m):
    s = input()
    sinput = s.strip().split(' ')
    sinput = [int(x) for x in sinput]
    t = (sinput[0], sinput[1])
    dict_w[t] = sinput[2]

def dist(t1, t2):

    x1, y1 = t1
    x2, y2 = t2

    d = max(abs(x2-x1), abs(y2-y1))

    return int(d)

for x in range(0, n):
    for y in range(0, n):
        t = (x, y)
        dict_v[t] = 0

for kw, w in dict_w.items():
    for kv, v in dict_v.items():
        d = dist(kv, kw)
        w_value = w
        if kw == kv:
            dict_v[kv] = w_value
        else:
            if w_value - d > 0:
                dict_v[kv] += (w_value - d)
            else:
                dict_v[kv] += 0

imax = max(dict_v, key=dict_v.get)

print(int(dict_v[imax]))

"""
print(dict_w)


for x in range(0, n):
    for y in range(0, n):
        t = (x, y)
        print(dict_v[t], end=' ')
    print()
"""

