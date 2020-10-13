class Array:
    def __init__(self, n):
        self._elementos = [0] * n

    def elementos(self):
        return self._elementos

    def set_elemento(self, indice, valor):
        self._elementos[indice] = valor
a = Array(4)
print(a.elementos())
a.set_elemento(0, 3.3)

print(a.elementos())
