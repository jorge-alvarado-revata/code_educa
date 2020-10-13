m = int(input())
n = int(input())
for x in range(m, m*n+1, m):
    print(x, end= ' ')
print()
for y in range(n, n*m+1, n):
    print(y, end= ' ')


print("\notra forma ....")

for x in range(1, n+1):
    print(x*m, end= ' ')

print()
for y in range(1, m+1):
    print(y*n, end= ' ')
