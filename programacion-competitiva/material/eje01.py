# http://acm.timus.ru/problem.aspx?space=1&num=1149

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

def lista_variables(n):
    return ['a' + str(i) for i in range(1, n + 1)]

def lista_valores(n):
    return [x for x in range(n, 0, -1)]


def s_n(n):
    pila = []
    variables = lista_variables(n)
    valores = lista_valores(n)
    operador = '+'
    for i in range(0, n, 1):
        pila.append(variables[i])
        pila.append(operador)
        pila.append(valores[i])

    s_tokens = ''
    contador_par = 0
    i = 0
    while i < len(pila):
        if pila[i] in variables:
            s_tokens = s_tokens + str(pila[i])
            contador_par += 1
            i += 1
            flag = False
            while i < len(pila) and not flag:
                if pila[i] not in variables:
                    if pila[i] == operador:
                        s_tokens += pila[i]
                    elif pila[i] in valores:
                        s_tokens += str(pila[i])
                    i += 1
                else:
                    flag = True

            while contador_par > 0 and i < len(pila):
                s_tokens = s_tokens + ')'
                s_tokens = '(' + s_tokens
                contador_par -= 1

    respuesta = rep_s_n(s_tokens, n)
    return respuesta



n = int(input())
if n >=1 and n <= 200:
    print(s_n(n), end='')

