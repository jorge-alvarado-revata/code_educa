numero_credito = int(input())
costo = float(input())
rendimiento = input()
descuento = 0
if rendimiento == 'A':
    descuento = 0.3
elif rendimiento == 'B':
    descuento = 0.2
elif rendimiento == 'C':
    descuento = 0.1
elif rendimiento == 'D':
    descuento = 0.05

total = numero_credito*costo*(1.0 -descuento)
