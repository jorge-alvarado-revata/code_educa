# Escribir un programa que detecte si una cadena es palindrome

# existen varias formas

def f1(s):
    resultado = s == ''.join(reversed(s))
    return resultado


def f2(s):
    return True if  s == s[::-1] else False


def f3(s):
    l = len(s)
    respuesta = False
    for i in range(0, int(l / 2)):
        if s[i] != s[l-i -1]:
            respuesta = False
            break
        else:
            respuesta = True
    return respuesta

print(f1('xaabaaa'))
print(f2('xaabaaa'))
print(f3('xaabaaa'))
