s = "estamos desarrollando un codigo en python"

cont =0

n = len(s)

letra = ''
while cont <= n and letra != 'g':
    letra = s[cont]
    cont = cont+1

print(cont-1)
