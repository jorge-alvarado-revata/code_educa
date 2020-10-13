import math
ladoa = float(input())
ladob = float(input())
ladoc = float(input())

s = 1/2*(ladoa+ladob+ladoc)

factor_area = s*(s-ladoa)*(s-ladob)*(s-ladoc)

#area = factor_area ** 0.5
area = math.sqrt(factor_area)

print(area)
