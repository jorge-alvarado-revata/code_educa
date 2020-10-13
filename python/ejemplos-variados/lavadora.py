# sistema de lavados de lavadora LG super ultra automatic

# menu de opciones

opciones = """
    1. lavado rapido
    2. lavado suave
    3. lavado normal
    4. lavado ahorro
    5. salir
    ingrese opciones: 

"""

opcion_lavado = input(opciones)

if opcion_lavado != '5':

    if opcion_lavado == '1':
        print('preparar lavasa')
        print('lavar')
        print('centrifugar')
        
    elif opcion_lavado == '2':
        print('preparar lavasa')
        print('agregar suavizante')
        print('lavar')
        print('centrifugar')
        
    elif opcion_lavado == '3':
        print('preparar lavasa')
        print('lavar')
        print('centrifugar')

    elif opcion_lavado == '4':
        print('preparar lavasa')
        print('reutilizar agua')
        print('lavar')
        print('centrifugar')
else:
    print('gracias por usar LG')
        
        
