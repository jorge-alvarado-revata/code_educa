"""
Escribir un programa que multiplique
por 2 los valores de la lista,
de 2 en 2 una lista dada.
"""
s = [1, 2, 3, 4, 5, 6, 7, 8 , 9, 10]
#t = [2, 2, 6, 4, 10, 14, 8, 18, 10]
n = len(s)
t = s[:]
for indice in range(0, n, 2):
    t[indice] = s[indice] * 2
print(t)