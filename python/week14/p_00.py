class Foo:
    def __init__(self, name):
        self._name = name

    def get_name(self):
        return self._name

    def __str__(self):
        return 'object Foo: {}'.format(self._name)

a = Foo('myfoo')

print(a)
print(a.get_name())

