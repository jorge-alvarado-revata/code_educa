# callbacks
import sys
from tkinter import *

def quit():
    print('hola, aqui de nuevo')
    sys.exit()


widget = Button(None, text='Press-Me to Quit', command=quit)
widget.pack()
widget.mainloop()
