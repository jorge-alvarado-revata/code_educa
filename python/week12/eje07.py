# alias y copia

colores = {'blanco': 100, 'negro': 255, 'azul': 120, 'rojo': 140}

alias_colores = colores

alias_colores['blanco'] = 300

copia_colores = colores.copy()

copia_colores['negro'] = 320

print(colores)
print(alias_colores)
print(copia_colores)