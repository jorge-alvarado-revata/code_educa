# Escribir un programa que permita calcular el pago de una llamada telefonica en funcion del numero
# de minutos si se sabe que el costo es de 0.5, si la llamada excede los 3 minutos tendras un
# descuento de 0.10 por en la tarifa de cada minuto extra.

minutos = float(input('ingrese minutos: '))

costo_min = 0.5
pago = 0

if min <= 3:
    pago = minutos * costo_min
else:
    extras = minutos - 3
    pago = 3 * costo_min + extras * (costo_min - 0.1)

print('el pago es', pago)
