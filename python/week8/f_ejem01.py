# calcular la longitud de una cadena

def mylen(s):
    count = 0
    for valor in s:
        count +=1
    return count
# imprimir la cantidad de elementos de una cadena
s = 'hola mundo'
l = mylen(s)
print ('la longitud de la cadena es: {}'.format(l))
#obtener el ultimo elemento de una cadena
ln = mylen(s)
t = s[ln-1]
print('el ultimo elemento es: {}'.format(t))
