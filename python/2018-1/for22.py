n = int(input("ingrese el # de alumnos:"))
aprobados = 0
desaprobados = 0
sumaglobal = 0
for indice in range(1, n+1):
    print("Para alumno:", indice)
    suma = 0
    for x in range(1, 6):
        nota = int(input("ingrese nota {}:".format(x)))
        suma = suma + nota
    promedio = suma / 5
    sumaglobal = sumaglobal + promedio
    if promedio > 10:
        aprobados = aprobados + 1
    else:
        desaprobados = desaprobados + 1

    print("el promedio del alumno", indice, "es:", promedio)

print("aprobados:", aprobados)
print("desaprobados: ", desaprobados)
print("promedio del salon: ", sumaglobal/n)
