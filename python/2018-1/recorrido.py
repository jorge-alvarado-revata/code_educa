s = "estamos desarrollando un codigo en python"

cont =0

n = len(s)

letra = ''

for e in s:
    if e == 'g':
        break
    cont = cont+1
print(cont)
"""

while cont <= n and letra != 'g':
    letra = s[cont]
    cont = cont+1

print(cont-1)
"""
