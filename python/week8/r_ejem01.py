# autoreferencia.
# este ejemplo fallará por que se referencia infinitamente.

def foo(s):
    print(s)
    foo()
