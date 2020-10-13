nombre=input("diga el nombre del archivo")
archivo=open(nombre,"r")
texto=input("ingrese el texto a buscar")
for linea in archivo:
   if linea.find(texto)>-1:
       print(linea,end="")
