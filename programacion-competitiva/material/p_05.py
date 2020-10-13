
class Pila:

    #-------------------------------------------------------------------

    # Crea un pila vacia.

    def __init__(self):
        self._a = []  # Items

    #-------------------------------------------------------------------

    # Retorna si esta vacia

    def isEmpty(self):
        return len(self._a) == 0

    #-------------------------------------------------------------------

    # Pone un elemento en el top de la pila

    def push(self, item):
        self._a += [item]

    #-------------------------------------------------------------------

    # Obtiene el ultimo elemento agregado

    def pop(self):
        return self._a.pop()

    #-------------------------------------------------------------------

    # Retorna una cadena que representa los elementos

    def __str__(self):
        s = ''
        for item in self._a:
            s = str(item) + ' ' + s

        return s

#-----------------------------------------------------------------------


pila = Pila()
desbalanceada = False
#elementos = 'a + (b + c) - d * ((((s) - t)) - d'
elementos = 'a + (b + c) - d * ((((s) - t))) - d'
for e in elementos:
    item = e
    if item == '(':
        pila.push(item)
    elif item == ')':
        if not pila.isEmpty():
            pila.pop()
        else:
            desbalanceada = True
            break


if pila.isEmpty() and not desbalanceada:
    print('balanceada')
else:
    print('desbalanceada')


