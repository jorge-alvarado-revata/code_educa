#Organizador de desayunos

dic_jugo = {}
dic_bebida = {}
dic_sanguche = {}
dic_galleta = {}
dic_fruta = {}

jugos = []
bebidas = []
sanguche = []
galletas = []
frutas = []

def loaddata(nombre, dicprod, listprod):
    file = open(nombre, "r")
    while True:
        dicprod = {}
        theline = file.readline().rstrip()
        if len(theline) == 0:
            break
        lista = theline.split(',')
        dicprod['nombre']=lista[0]
        dicprod['precio']=int(lista[1])
        listprod.append(dicprod)
    file.close()

loaddata('archivos/bebidas.txt',dic_bebida, bebidas)

def printmenu(listprod):
    cabecera = '{:<15}  {:>15} '.format('Nombre', 'Precio')
    print(cabecera)
    for dic in listprod:
        registro = '{:<15}  {:>15} '.format(dic['nombre'], dic['precio'])
        print(registro)

printmenu(bebidas)
