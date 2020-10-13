#calcular la cantidad de letras que aparecen en la frase

cadena_principal = "Mississippi"
cadena = cadena_principal
lista = []

for v in cadena_principal:
    if v not in lista:
        lista.append(v)

frecuencia = []
for v in lista:
    contador = 0
    for s in cadena:
        if v == s:
            contador += 1
    frecuencia.append((v, contador))


print(frecuencia)

