import math

lsqt = []
llog = []
for x in range(1, 11):
    lsqt.append(math.sqrt(x))
    llog.append(math.log10(x))

titulo = 'numero  raiz     log'
s = ''
print(titulo)
for y in range(0, 10):
    s = ' {}   {:06.2f}     {:06.2f}'.format(y, lsqt[y], llog[y])
    print(s)
