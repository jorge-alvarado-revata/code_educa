# simula un dado.
import random

dice = ''
while dice != 'x' and dice !='X':
    dice = input('lance los dados con la tecla r, si desea terminar presione x: ')
    numero = random.randint(1, 6)
    print('su lanzamiento es : ', numero)
    print(dice)
