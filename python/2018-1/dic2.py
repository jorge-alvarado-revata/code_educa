notas = []
dicalumnos = {}
n = int(input('ingrese el numero de alumnos:'))
for i in range(1, n+1):
    notas = []
    alumno = input('ingrese nombre y apellido:')
    for i in range(4):
        value = int(input('ingrese nota{}:'.format(i+1)))
        notas.append(value)
    dicalumnos[alumno] = notas

for k, v in dicalumnos.items():
    print(k, sum(v)/4)
