import math
x1 = int(input())
y1 = int(input())
x2 = int(input())
y2 = int(input())

distancia = math.sqrt((x2-x1)**2 + (y2-y1)**2)

print("distancia:", distancia)

punto_medio_xn = (x2+x1)/2
punto_medio_yn = (y2+y1)/2

print("punto medio: ", punto_medio_xn, punto_medio_yn)
