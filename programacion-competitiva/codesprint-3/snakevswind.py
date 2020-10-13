n = int(input())
viento = str(input())
x, y = input().strip().split(' ')
x, y = [int(x), int(y)]

m = {}

for i in range(0, n):
    for j in range(0, n):
        t = (i, j)
        m[t] = 0


p1 = (0, 0)
p2 = (0, n-1)
p3 = (n-1, 0)
p4 = (n-1, n-1)

norte = ['n', 'e', 'w', 's']
sur = ['s', 'e', 'w', 'n']
este = ['e', 'n', 's', 'w']
oeste = ['w', 'n', 's', 'e']

base_norte = norte[:]
base_sur = sur[:]
base_este = este[:]
base_oeste = oeste[:]

def get_base_viento(viento):
    respuesta = []
    if viento == 'n':
        respuesta = base_norte
    elif viento == 's':
        respuesta = base_sur
    elif viento == 'e':
        respuesta = base_este
    elif viento == 'w':
        respuesta = base_oeste

    return respuesta


def get_viento(viento):
    respuesta = []
    if viento == 'n':
        respuesta = norte
    elif viento == 's':
        respuesta = sur
    elif viento == 'e':
        respuesta = este
    elif viento == 'w':
        respuesta = oeste

    return respuesta

def direccion(viento):

    retorno = ''


    if viento == 'n':
        if len(norte) > 0:
            retorno = norte[0]

    elif viento == 'e':
        if len(este) > 0:
            retorno = este[0]

    elif viento == 'w':
        if len(oeste) > 0:
            retorno = oeste[0]

    elif viento == 's':
        if len(sur) > 0:
            retorno = sur[0]


    return retorno

def valida(t, next_move):

    x, y = t
    nt = t

    rest = False
    if next_move == 'n':
        nx, ny = x - 1, y

        if nx >= 0:
            rest = True

    elif next_move == 's':
        nx, ny = x + 1, y

        if nx < n:
            rest = True

    elif next_move == 'e':
        nx, ny = x, y + 1

        if ny < n:
            rest = True

    elif next_move == 'w':
        nx, ny = x, y - 1

        if ny >= 0:
            rest = True

    if rest:

        if m[(nx, ny)] == 0:
            nt = (nx, ny)
        else:
            rest = False

    return (rest, nt)

def reordena(list_viento):

        ele = list_viento[0]
        del list_viento[0]
        list_viento.append(ele)

def reset_viento(viento, new_viento):
    global norte
    global este
    global oeste
    global sur
    if viento == 'n':
        norte = new_viento[:]

    elif viento == 'e':
        este = new_viento[:]

    elif viento == 'w':
        oeste = new_viento[:]

    elif viento == 's':
        sur = new_viento[:]


nx, ny = (0, 0)

t = (x, y)

if m[t] == 0:

    if t in (p1, p2, p3, p4):

        contador = 1
        limite = n*n
        while contador <= limite:

            if m[t] == 0:
                m[t] = contador
                contador += 1

            next_move = direccion(viento)

            val_next, nt = valida(t, next_move)

            if val_next:
                t = nt
                new_list_viento = get_base_viento(viento)
                reset_viento(viento, new_list_viento)

            else:
                list_viento = get_viento(viento)
                reordena(list_viento)

    for i in range(0, n):
        for j in range(0, n):
            t = (i, j)
            print(m[t], end=' ')
        print()