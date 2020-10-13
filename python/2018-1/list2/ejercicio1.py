# Escribir un programa que solicite los pesos de los alumnos de un aula.
# Ingresar elementos mientras sean distintos de 0.
# Devuelva el peso minino, máximo, promedio y la cantidad de elementos.

valor = -1
cont = 1
pesos = []
while valor != 0:
    valor = int(input("ingrese el peso del alumno {}:".format(cont)))
    cont = cont +1
    if valor != 0:
        pesos.append(valor)

print('min:',min(pesos))
print('max:', max(pesos))
print('promedio:',sum(pesos)/len(pesos))
print('# elementos:',len(pesos))

