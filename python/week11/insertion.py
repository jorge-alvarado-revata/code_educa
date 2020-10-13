import random
import time

def insertion(alist):
   for index in range(1,len(alist)):

     currentvalue = alist[index]
     position = index

     while position>0 and alist[position-1]>currentvalue:
         alist[position]=alist[position-1]
         position = position-1

     alist[position]=currentvalue

N = int(input())
lista = []


for i in range(N):
    lista.append(random.randint(-10000, 10000))

print(lista)
t0 = time.time()
insertion(lista)
t1 = time.time()
print(lista)

print(t1-t0)
