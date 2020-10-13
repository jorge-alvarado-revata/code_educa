edad = int(input())
precio = 0
if edad <= 15:
    precio = 7
elif edad >= 16 and edad <= 59:
    precio = 15
elif edad >= 60:
    precio = 5

print("para la edad", edad)
print("el precio es:", precio)
