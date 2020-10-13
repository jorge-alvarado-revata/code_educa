s = input()
x = int(s[0])
y = int(s[2])
op = s[1]
r = 0
if op == '+':
    r = x+y
elif op == '-':
    r = x-y
print(r)


