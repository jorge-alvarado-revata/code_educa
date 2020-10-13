import matplotlib
matplotlib.use("TkAgg")
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2TkAgg
from matplotlib.figure import Figure

import tkinter as Tk
import numpy as np


root = Tk.Tk()
root.wm_title('Funcion basica con matplotlib')

def t_f(t):
    return t*t


f = Figure(figsize=(5, 4), dpi=100)
a = f.add_subplot(111)

t = np.arange(1, 9, 1)
a.plot(t, t_f(t))




# canvas

canvas = FigureCanvasTkAgg(f, master=root)
canvas.show()
canvas.get_tk_widget().pack(side=Tk.BOTTOM, fill=Tk.BOTH, expand=True)

toolbar = NavigationToolbar2TkAgg(canvas, root)
toolbar.update()
canvas._tkcanvas.pack(side=Tk.TOP, fill=Tk.BOTH, expand=True)

root.mainloop()
