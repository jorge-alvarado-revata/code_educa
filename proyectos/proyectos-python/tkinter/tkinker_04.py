# callbacks
import sys
from tkinter import *

def quit():
    a = 'hola, aqui de nuevo'
    print(a)
    
    sys.exit()


widget = Button(None, text='Press-Me to Quit', command=quit)
widget.pack()
widget.mainloop()
