"""
http://acm.timus.ru/problem.aspx?space=1&num=1001
"""
import math

s = input()
s = s.split(' ')
l = []
for e in s:
    if e!= '':
        x = math.sqrt(int(e))
        l.append(x)
l.reverse()
[print('%.4f' % x) for x in l]




