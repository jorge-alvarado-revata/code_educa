
cont1 = 0
cont2 = 0
cont3 = 0
valor = 1
while valor != 0:
    valor = int(input("ingrese valor:"))
    if valor != 0:
        if valor % 2 == 0:
            cont1 = cont1 + 1
        else:
            cont2 = cont2 + 1
        cont3 = cont3 + 1

print("pares:", cont1)
print("impares:", cont2)
print("total:", cont3)
