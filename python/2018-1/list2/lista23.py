#programa que simula un hospital

pacientes = []
separador = ""
contador = 1
while separador != "#":
    separador = input("Ingrese el apellido del paciente {}: ".format(contador))
    if separador != "#":
        pacientes.append(separador)
    contador = contador+1
#atencion firstIn-firstOut (FIFO)

copia_pacientes = pacientes.copy()

lenc = len(copia_pacientes)
for j in range(lenc):
    nombrecliente = copia_pacientes.pop(0)
    print("atención del paciente:", nombrecliente)

print("***********************************")

copia_pacientes = pacientes.copy()

#atencion LastIn-firstOut (LIFO)
while len(copia_pacientes) > 0:
    nombrecliente = copia_pacientes.pop()
    print("atención del paciente:", nombrecliente)
