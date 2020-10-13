nombre=input("diga el nombre del archivo")
archivo=open(nombre,"r")
cuentalineas=0
cuentapalabras=0
for linea in archivo:
   cuentalineas+=1
   palabras=linea.split(" ")
   cuentapalabras=cuentapalabras+len(palabras)
print("la cantidad de lineas son "+ str(cuentalineas))
print("la cantidad de palabras son "+ str(cuentapalabras))
