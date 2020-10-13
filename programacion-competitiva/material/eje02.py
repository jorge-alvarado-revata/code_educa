

def a_n(n):
    pattern_impar = '{}+sin({})'
    pattern_par = '{}-sin({})'
    if n == 1:
        return 'sin(1)'
    if n > 1:
        s = str(n)
        for i in range(n, 1, -1):
            if i % 2 == 0:
                s = pattern_par.format(i-1, s)
            else:
                s = pattern_impar.format(i-1, s)
        return 'sin({})'.format(s)

def rep_s_n(s, n):
    t = ''
    for i in range(1, n+1):
        variable = 'a' + str(i)
        t = a_n(i)
        s = s.replace(variable, t, 1)
    return s

def s_n(n):

    s = 'a1+' + str(n)

    for i in range(2, n+1):
        s = '(' + s + ')'
        s = s + 'a' + str(i) + '+' + str(n+1 - i)

    return rep_s_n(s, n)

n = int(input())
if n >=1 and n <= 200:
    print(s_n(n), end='')
