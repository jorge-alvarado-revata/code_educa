import sys

es_bisiesto = False

if len(sys.argv) > 0:
    year = int(sys.argv[1])

    es_bisiesto = (year % 4 == 0)
    es_bisiesto = es_bisiesto and (year % 100 != 0)
    es_bisiesto = es_bisiesto or (year % 400 == 0)

print(es_bisiesto)
