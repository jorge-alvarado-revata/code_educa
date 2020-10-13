import matplotlib
matplotlib.use("TkAgg")
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2TkAgg
from matplotlib.figure import Figure

import tkinter as Tk
import numpy as np


root = Tk.Tk()
root.wm_title('Funcion basica con matplotlib')


f = Figure(figsize=(5, 4), dpi=100)
a = f.add_subplot(111)
a.plot([1,2,3,4,5,6,7,8], [5,6,1,3,8,9,3,5])




# canvas

canvas = FigureCanvasTkAgg(f, master=root)
canvas.show()
canvas.get_tk_widget().pack(side=Tk.BOTTOM, fill=Tk.BOTH, expand=True)

toolbar = NavigationToolbar2TkAgg(canvas, root)
toolbar.update()
canvas._tkcanvas.pack(side=Tk.TOP, fill=Tk.BOTH, expand=True)

root.mainloop()
