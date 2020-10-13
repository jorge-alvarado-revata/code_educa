
# inverso de una cadena

def inverso(s):
    if s == '':
        return ''
    else:
        return inverso(s[1:]) + s[0]

print(inverso('hola como estas'))
