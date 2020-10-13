# invocando funciones

def f1(f):
    print (f*f*f)

def f2(f):
    return f1(f)

def f3(x):
    f2(x)

def f4(x):
    f3(x)


def a():
  pass


def b(a):
  return a


def c(a, b):
  c = a and b

  return c


def d():
  d = a
  e = c(a, b)
  return e


def e():
    print()
    return None


def f(*args):
    for i in range(1, len(args) + 1):
        print (i)


def g(**kawarg):
    for i in kawarg:
        print(i, kawarg[i])

def h(a=None, b=None, c=None):
    print(True)

def i(a, b=None):
    print (a)

d()

f(1, 2, 3, 4)

g(a=1, b=2, c=3)

h()




