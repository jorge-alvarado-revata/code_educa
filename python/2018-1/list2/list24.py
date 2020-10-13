porcentaje = -1
print("ingrese el % de aceptación entre 0 y 100")
porcentajes = []
while porcentaje != 0:
    porcentaje = int("ingrese su %:")
    if porcentaje != 0:
        porcentajes.append(porcentaje)

m = min(porcentajes)
ma = max(porcentajes)
p = sum(porcentajes)/len(porcentajes)
c = len(porcentajes)

print(m, ma, p, c)
