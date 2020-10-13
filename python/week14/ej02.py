# Crea un clase que recibe de parametro un numero
# el constructor debe inicializar el "0" a todo el array
# se debe crear un método para obtener la cantidad de elementos
# y crear el método set_elemento que recibe de parametro el indice
" donde se almacena y el valor"

# clase Array
class Array:
    # Constructor que inicializa el array con 0
    def __init__(self, n):
        self._elementos = [0] * n
    # retorna el numero de elementos
    def elementos(self):
        return self._elementos
    # coloca un valor en un elemento
    def set_elemento(self, indice, valor):
        self._elementos[indice] = valor

# main
a = Array(4)
print(a.elementos())
a.set_elemento(0, 3.3)
a.set_elemento(2, 12)


print(a.elementos())
