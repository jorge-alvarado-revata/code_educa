ejer1=open("ejer1.py","r")
ejer2=open("ejer2.py","r")
ejer3=open("ejer3.py","r")
ejer4=open("ejer4.py","r")
ejer5=open("ejer5.py","r")
archivo=open("nuevo.txt","w")
archivo.write("--Ejercicio 1--\n")
for lineas in ejer1:
    archivo.write(lineas)
archivo.write("--Ejercicio 2--\n")
for lineas in ejer2:
    archivo.write(lineas)
archivo.write("--Ejercicio 3--\n")
for lineas in ejer3:
    archivo.write(lineas)
archivo.write("--Ejercicio 4--\n")
for lineas in ejer4:
    archivo.write(lineas)
archivo.write("--Ejercicio 5--\n")
for lineas in ejer5:
    archivo.write(lineas)

