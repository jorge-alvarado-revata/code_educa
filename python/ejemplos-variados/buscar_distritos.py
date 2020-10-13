# Programa para buscar una direccion y calle de un distrito

# necesitamos conocer a las listas, las listas son repositorios de datos
# continuos, ideales para almacenar información
# en clases posteriores conoceremos su definicion y operaciones
# por ahora nos basta con que es una forma de tener informacion continua

distritos = []

distritos.append('los olivos')
distritos.append('san juan de miraflores')
distritos.append('san juan de lurigancho')
distritos.append('san isidro')
distritos.append('la perla')
distritos.append('santa anita')
distritos.append('punta hermosa')
distritos.append('punta negra')
distritos.append('breña')
distritos.append('magdalena')

distrito_consulta = input('ingrese el distrito que quiere verificar o x si quiere terminar : ')

salir = False
indice = 0

if distrito_consulta != 'x':
    
    while indice < len(distritos) and not salir:

        if distritos[indice] == distrito_consulta:
            print('su distrito se encuentra en nuestros registros')
            salir = True
        else:
            print(indice)
            indice +=1

    if not salir:
        print('su distrito no se encuentra')
else:
    print('gracias por usar nuestro software')
                  
    
