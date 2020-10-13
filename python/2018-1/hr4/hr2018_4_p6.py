dicnombres = {}

s = ''

while s != '#':
    s = input()
    if s!= '#':
        if s not in dicnombres:
            dicnombres[s] = 1
        else:
            dicnombres[s] = dicnombres[s] + 1

for k, v in dicnombres.items():
    print('{}:{}'.format(k,v))
