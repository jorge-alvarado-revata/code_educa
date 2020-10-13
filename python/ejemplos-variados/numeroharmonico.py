# aceptar un entero n con la funcion input
# imprimir el valor del n-avo numero armónico
# https://es.wikipedia.org/wiki/N%C3%BAmero_arm%C3%B3nico

n = int(input('ingrese numero: '))

total = 0.0

for i in range(1, n+1):
    # adiciona el i-esimo termino a la suma
    total = total + 1.0  / i

print(total)
