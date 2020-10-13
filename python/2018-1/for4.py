x = int(input())
s = 1
for a in range(1, x+1):
    t = x**a
    producto = 1
    for b in range(1, a+1):
        producto = producto*b
    t = t / producto
    s = s + t
print(s)

