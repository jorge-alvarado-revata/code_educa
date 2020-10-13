class ArrayInt:
    def __init__(self, n):
        self._elementos = [0] * n
        self.n = n

    def __str__(self):
       return 'ArrayInt'

    def __repr__(self):
        return 'ArrayInt'

    def __setitem__(self, key, value):
        if type(value) == int:
            self._elementos[key] = value
        else:
            raise ValueError('Debe ser un valor entero')

    def __getitem__(self, item):
            return self._elementos[item]

    def __len__(self):
        return len(self._elementos)

    def __iter__(self):
        self.index = 0
        return self

    def __next__(self):
        if self.index <= (self.n - 1):
            result = self._elementos[self.index]
            self.index += 1
            return result
        else:
            raise StopIteration



a = ArrayInt(8)

a[0] = 4
x = a[0]
print(x)
print(a)
print(type(a))

t = []
print(type(t))
print(len(a))

for x in a:
    print(x)

