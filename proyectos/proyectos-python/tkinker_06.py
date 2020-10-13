# binding events

import sys

from tkinter import *


def hello(event):
    print('double click to exit')

def quit(event):
    print('caugh a double click, leaving')
    sys.exit()

widget = Button(None, text='Hello event world')
widget.pack()
widget.bind('<Button-1>', hello)
widget.bind('<Double-1>', quit)
widget.mainloop()

        
