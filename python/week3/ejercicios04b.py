# usted tiene que programar una tabla de conocimiento del cerebro positronico
# de un robot de ultima generacion.
# usted tiene la informacion de la tabla en la siguiente lista
"""
El robot cumple las tres leyes de la robotica.
Primera ley: Un robot no puede dañar a un humano sea por inaccion o permitir que un humano se lastime.
Segunda ley: un robot obedece las ordenes de un humano excepto cuando la orden entra en conflicto con la primera ley.
Tercera ley: un robot protege su existencia hasta que esa proteccion no entre en conflicto con la primera o segunda ley.

1. Disparar a una persona (2)
2. Me disparare (1)
3. Me estoy cayendo de un edificio. (1)
4. Tengo un accidente con riesgo de muerte.(1)
5. Prepara un pastel(0)
6. Robot quedate en los rieles de un tren(3)
7. Salvar personas sobre rieles con riesgo de desaparicion(0)
8. Colocar energia electrica en agua. (3)
9. Disparar a un animal de caza. (0)
10. Operar el corazon de un humano. (0)
"""

# Realice un programa que devuelva True o False si la orden entra en conflicto
# con algunas de las tres leyes de la robotica

PRIMERA_LEY = 1
SEGUNDA_LEY = 2
TERCERA_LEY = 3

# un diccionario es una estructura de datos para relacionar indices con datos
tabla_conflicto = {'1': 2,
                   '2': 1,
                   '3': 1,
                   '4': 1,
                   '5': 0,
                   '6': 3,
                   '7': 0,
                   '8': 3,
                   '9': 0,
                   '10': 0}

orden = input('Ingrese orden: ')

conflicto = tabla_conflicto[orden]

if conflicto == PRIMERA_LEY:
    print('entra en conflicto con la PRIMERA LEY')
elif conflicto == SEGUNDA_LEY:
    print('entra en conflicto con la SEGUNDA LEY')
elif conflicto == TERCERA_LEY:
    print('entra en conflicto con la SEGUNDA LEY')
else:
    print('se ejecuta orden')



