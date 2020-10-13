import recursos
import modLogic


def leerOpcion():
    n = int(input('Ingrese la opción:'))
    return n

def leerEnter():
    print()
    s = input('Presione cualquier tecla para continuar:')

def menuprincipal():
    print(recursos.bienvenida)
    print(recursos.menu)

def menuExamenes():
    print(recursos.menuExamenes)

def menuVerExamen():
    print(recursos.menuVerExamen)
    dic_examenes = modLogic.loadExamenes()
    cabecera = dic_examenes['cabecera']
    for data in cabecera:
        print(f'{data:^10}', end='\t')
    print()
    filas = dic_examenes['filas']
    for dic in filas:
        for val in cabecera:
            print(f'{dic[val]:^10}', end='\t')
        # end for
        print()
    # end for


def menuNoExamen():
    print(recursos.menuNoHayExamen)

def menuPostulantes():
   print(recursos.menuPostulantes)

def menuNoPostulantes():
    print(recursos.menuNoHayPostulantes)

def menuVerPostulantes():
    pass




