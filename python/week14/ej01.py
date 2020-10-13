# Crea una clase denominada Curso, donde inicializa la propiedad nombre
# además crea el método get_nombre para solicitar el nombre

# clase curso
class Curso:
    # constructor, inicializa la clase
    def __init__(self, nombre):
        self._nombre = nombre
    # metodo para obtener el nombre
    def get_nombre(self):
        return self._nombre

    def set_nombre(self, nombre):
        self._nombre = nombre
    # metodo para mostrar valores de la clase
    def __str__(self):
        return 'objeto Curso: {}'.format(self._nombre)

a = Curso('C++')
print(a)
a.set_nombre("PYTHON")
print(a)
print(a.get_nombre())
