s = 'hola mundo'

n = len(s)
# recorres por indice
for i in range(0, n):
    print(s[i],end = '')
print()

# recorres por valor
for v in s:
    print(v, end = '')
print()

print(s[0:4])

print(s[:4])

print(s[5:])

print(s[-1])
print(s[-2])

for i in range(-1, -1*(n+1), -1):
    print(s[i], end='')

print('fin')


print(s[::-1], end='')
print()

print(s.find('m'))
print(s)

print(s.replace('o', 'u'))
print(s)

s.isdigit()
print(s.upper())

a = input('ingrese el valor de a: ')
b = input('ingrese el valor de b: ')

if a.isdigit() and b.isdigit():
    c = int(a) + (b)
    print(c)
