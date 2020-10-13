archivo=open("hola.txt","r")
archivo2=open("hola2.txt","w")
for linea in archivo:
   for caracter in linea:
       if caracter!="\n":
           nuevocaracter=chr(ord(caracter)+1)
       else:
           nuevocaracter=caracter
       archivo2.write(nuevocaracter)
