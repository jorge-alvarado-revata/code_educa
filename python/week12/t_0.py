#colores

T = (100, 120, 200)

nuevo_color = T[0]

(amarillo, rojo, azul) = T

print(amarillo)

#packing
(a,b) = (3,4)
#unpacking
print(a,b)



print(T)

def datos_personales(nombre, apellido):
    datos = (nombre, apellido)
    return datos

print(datos_personales('Jorge', 'Alvarado'))