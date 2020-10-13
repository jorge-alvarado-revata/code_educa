#programa que simula un banco

N = int(input("ingrese el numero de clientes:"))

contador = 0
clientes = []
for i in range(1, N+1):
    nombre = input("Ingrese el nombre del cliente {}: ".format(i))
    clientes.append(nombre)
#atencion firstIn-firstOut (FIFO)

copia_clientes = clientes.copy()

lenc = len(copia_clientes)
for j in range(lenc):
    nombrecliente = copia_clientes.pop(0)
    print("atención del cliente:", nombrecliente)

copia_clientes = clientes.copy()

#atencion LastIn-firstOut (LIFO)
while len(copia_clientes) > 0:
    nombrecliente = copia_clientes.pop()
    print("atención del cliente:", nombrecliente)
