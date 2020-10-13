nombre=input("diga el nombre del archivo")
n=int(input("diga cuantas lineas quiere extraer"))
archivo = open(nombre,"r")
for i in range(n):
   print(archivo.readline(),end="")
