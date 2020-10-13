# Ejemplo de preparacion de un pastel version con sentencias,
# expresiones y condicionales
MASA_HORNEABLE = 5
CONSISTENCIA = 5

azucar = 1.5
harina = 1
sal = 0.2
mantequilla = 0.6

masa = azucar + harina + sal + mantequilla

indice_mescla = 1
indice_cosion = 1

# mesclar
print('indice de mescla :', indice_mescla)
indice_mescla += 1
print('indice de mescla :', indice_mescla)
indice_mescla += 1
print('indice de mescla :', indice_mescla)
indice_mescla += 1
print('indice de mescla :', indice_mescla)
indice_mescla += 1
print('indice de mescla :', indice_mescla)

# poner al horno si indice_mescla llega al nivel de consistencia

if indice_mescla == MASA_HORNEABLE:
    print('tomar la mescla y ponerla al horno')


    print('revisar si toma consistencia: ', indice_cosion)
    indice_cosion += 1
    print('revisar si toma consistencia: ', indice_cosion)
    indice_cosion += 1
    print('revisar si toma consistencia: ', indice_cosion)
    indice_cosion += 1
    print('revisar si toma consistencia: ', indice_cosion)
    indice_cosion += 1
    print('revisar si toma consistencia: ', indice_cosion)
    
    if indice_cosion == CONSISTENCIA:
        print('pastel se observa consistente')
        print('retirar del horno')


# termino

print('hermoso pastel hecho')


    
