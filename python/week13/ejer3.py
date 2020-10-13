archivo=open("hola.txt","r")
archivo2=open("hola2.txt","w")
for linea in archivo:
   archivo2.write(linea)
