# adivina el numero

high = 100
low = 0
mensaje = 'Ingrese \'h\' para indicar que el numero es muy alto. Ingrese \'l\' para indicar que es muy bajo.' + 'Ingrese \'c\' para indicar que es el correcto.'

print('Por favor piense en un numero entre 0 y 100!')
secret = (low + high)//2
print ('¿Es su numero secreto ' + str(secret) + '?')
option = input(mensaje)

while option != 'c':
    
  if option == 'h':
    high = secret
  elif option == 'l':
    low = secret 
  else:
      print ('Disculpe, No entiendo la opcion.')
      
  if option == 'h' or option == 'l':
    secret = (low + high)//2

  print ('¿Es su numero secreto ' + str(secret) + '?')
  option = input(mensaje)
  
  
if option == 'c':
    print ("Game over. Su numero secreto es: " + str(secret))
