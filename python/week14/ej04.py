# Crear la clase Cuenta que maneja los atributos nombre, monto y mov
# se debe crear el método abono que se encarga de acumular el monto
# y el método retiro que se encarga de disminuir el saldo

class Cuenta:
    # constructor
    def __init__(self, nombre, monto):
        self._nombre = nombre
        self._monto = monto
        self._mov = []
        if monto > 0:
            self._mov.append(monto)


    def abono(self, monto):
        self._monto = self._monto + monto
        self._mov.append(monto)

    def retiro(self, monto):
        self._monto = self._monto - monto
        self._mov.append(-1*monto)

    def __str__(self):
        return 'Cuenta de: \'{}\' con un monto de {}'.format(self._nombre, self._monto)

# main
cuenta = Cuenta('Ana', 400)
print(cuenta)
