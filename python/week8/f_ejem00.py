# crear un programa que implemente un menu e invoque funciones


def suma(a, b):
    return a + b

def resta(a, b):
    return a - b

def multiplicar(a, b):
    return a * b

def division(a, b):
    return a / b

print('1. suma, 2. resta, 3. multiplicacion, 4. division')
opcion = input('> ')

a=input('digite el primer numero: ')
b=input('digite el primer numero: ')

if opcion == 1:
    print(suma(a,b))
elif opcion == 2:
    print(resta(a,b))
elif opcion == 3:
    print (multiplicar(a,b))
elif opcion == 4:
    print(division(a,b))
else:
    print('opcion incorrecta')
