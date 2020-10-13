def numerosquechua(n):

    dic = {1:'huk',
           2:'iskay',
           3:'kimsa',
           4:'tawa',
           5:'pichqa',
           6:'soqta',
           7:'qanchis',
           8:'pusaq',
           9:'isqon',
           10:'chunka'}

    if n >=1 and n <=10:
        return dic[n]
    else:
        return 'no encontrado'

print(numerosquechua(4))
