# Clase array de enteros
class ArrayInt:
    #Constructor
    def __init__(self, n):
        self._elementos = [0] * n

    def elementos(self):
        return self._elementos
    # valida que se ingresen enteros
    def set_elemento(self, indice, valor):
        if type(valor) == int:
            self._elementos[indice] = valor
        else:
            raise ValueError('Debe ser un valor entero')

    def elemento(self, indice):
        return self._elementos[indice]

# main
a = ArrayInt(4)
print(a.elementos())
a.set_elemento(0, 3)

print(a.elementos())
