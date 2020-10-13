numero = int(input())
digito1 = numero // 100
resto = numero % 100
digito2 = resto // 10
digito3 = resto % 10

suma = digito1 + digito2 + digito3
print(suma)
