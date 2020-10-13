limInf = int(input("ingrese limite inferior:"))
limSup = int(input("ingrese limite superior:"))

print("F  C")
while limInf <= limSup:
    F = limInf
    C = 5/9*(F-32)
    print(F, C)
    limInf = limInf+1
