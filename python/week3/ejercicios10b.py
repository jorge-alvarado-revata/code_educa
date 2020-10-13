# implementar una calculadora con linea de comando
# modifique el programa para calcular la raiz cuadrada
# usando la funcion math.pow y como operador el simbolo '?'


import sys
import math
op1 = sys.argv[1]
operador = sys.argv[2]
op2 = sys.argv[3]

resultado = 0

if operador == '+':
    resultado = int(op1) + int(op2)
elif operador == '-':
    resultado = int(op1) - int(op2)
elif operador == '*':
    resultado = int(op1) * int(op2)
elif operador == '#':
    resultado = int(op1) ** int (op2)
elif operador == '/':
    resultado = int(op1) / int(op2)
# colocar tu condicion

print(resultado)


