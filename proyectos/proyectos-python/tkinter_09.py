# calculadora post-fija
# ingrese dos operandos y el operador + al final. ejem: 2 3 + da como resultado 5

from tkinter import *

master = Tk()

e = Entry(master)
e.pack()

def callback():
    s = e.get()
    l = s.split()
    a = l[0]
    b = l[1]
    c = 0
    if l[2] == '+':
        c = int(a) + int(b)
    e.delete(0, END)
    e.insert(0, str(c))

b = Button(master, text='get', width=10, command=callback)
b.pack()



mainloop()
