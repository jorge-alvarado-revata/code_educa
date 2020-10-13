# Verifica si un año es bisiesto

es_bisiesto = False

year = int(input('ingrese el año: '))
es_bisiesto = (year % 4 == 0)
es_bisiesto = es_bisiesto and (year % 100 != 0)
es_bisiesto = es_bisiesto or (year % 400 == 0)

print(es_bisiesto)
