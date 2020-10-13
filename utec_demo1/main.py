import modUI
import modLogic

def bloqueExamenes():
    respuesta = 0
    modUI.menuExamenes()
    n = modUI.leerOpcion()
    if n == 11:
        existe = modLogic.valExamenes()
        if existe:
            modUI.menuVerExamen()
        else:
            modUI.menuNoExamen()
        modUI.leerEnter()
    elif n == 12:
        # codigo ingresar examen
        pass
    if n != 10:
        respuesta = 1
    else:
        respuesta = 10
    return respuesta


def bloquePostulantes():

    respuesta = 0

    modUI.menuPostulantes()
    n = modUI.leerOpcion()
    if n == 21:
        existe = modLogic.valPostulantes()
        if existe:
            modUI.menuVerPostulantes()
            modUI.menuPostulantes()
        else:
            modUI.menuNoPostulantes()
    elif n == 22:
        pass

    if n != 10:
        respuesta = 2
    else:
        respuesta = 10
    return respuesta

# main program
n = 10
while n != 0:

    if n == 10:
        modUI.menuprincipal()
        n = modUI.leerOpcion()
    if n == 1:
        n = bloqueExamenes()
    elif n == 2:
        n = bloquePostulantes()
    elif n == 3:
        pass
#  end while


