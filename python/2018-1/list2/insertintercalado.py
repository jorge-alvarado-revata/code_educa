s = input()
m = input()
p = s.split(' ')

ln = []
for x in p:
    ln.append(int(x))

p = [int(x) for x in p]

q = m.split(' ')
q = [int(x) for x in q]

print(p)
print(q)

if len(p) > len(q):
    cont=1
    for x in q:
        p.insert(cont,x)
        cont = cont+2
    print(p)
else:
    cont=1
    for x in p:
        q.insert(cont,x)
        cont = cont+2
    print(q)
