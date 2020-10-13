# bound method callbacks
import sys

from tkinter import *

class HelloClass:

    def __init__(self):
        widget = Button(None, text='Press me to quit', command=self.quit)
        widget.pack()

    def quit(self):
        print('leaving now')
        sys.exit()

HelloClass()
mainloop()

        
