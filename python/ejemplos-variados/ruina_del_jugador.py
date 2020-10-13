# la ruina de un jugador

import random

monto = int(input())
premio = int(input())
tanteos = int(input())

apostadas = 0
triunfos = 0

for t in range(tanteos):
    # ejecucion de un experimento
    efectivo = monto

    while efectivo > 0 and efectivo < premio:
        # simular una apuesta
        apostadas += 1
        if random.random() < 0.5:
            efectivo += 1
        else:
            efectivo -= 1

    if efectivo == premio:
        triunfos += 1

print(str(100*triunfos // tanteos) + '% triunfos')
print('# promedio de apostadas: ', str(apostadas // tanteos))
