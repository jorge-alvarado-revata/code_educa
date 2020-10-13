import os
archivo=input("nombre del primer archivo")
que=int(input("ponga 1 si desea borrar o 2 si desea cambiarle de nombre"))
if (que==1):
    os.remove(archivo)
    print("Se borró el archivo")
if (que==2):
    nuevonombre=input("indique el nuevo nombre")
    os.rename(archivo,nuevonombre)
    print("Se cambio el nombre del archivo")

