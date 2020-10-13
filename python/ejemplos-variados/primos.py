# hallar los numeros primos del 1 al 100

def primo(numero):

    no_es_primo = False
    
    for x in range(2, numero):
        
        if ((numero % x) == 0):
            
            no_es_primo = True
            
    return no_es_primo
        
        

print('primos: ', end='')
for x in range(1, 101):
    if not primo(x):
        print(x, ' ', end='')

    
