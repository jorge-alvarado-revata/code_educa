import matplotlib
matplotlib.use("TkAgg")
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2TkAgg
from matplotlib.figure import Figure

import tkinter as Tk
import numpy as np


root = Tk.Tk()
root.wm_title('Funcion basica con matplotlib')

t = np.arange(0., 5., 0.2)

f = Figure(figsize=(5, 4), dpi=100)
a = f.add_subplot(111)
a.plot(t, t, 'r--', t, t**2, 'bs', t, t**3, 'g^')




# canvas

canvas = FigureCanvasTkAgg(f, master=root)
canvas.show()
canvas.get_tk_widget().pack(side=Tk.BOTTOM, fill=Tk.BOTH, expand=True)

toolbar = NavigationToolbar2TkAgg(canvas, root)
toolbar.update()
canvas._tkcanvas.pack(side=Tk.TOP, fill=Tk.BOTH, expand=True)

root.mainloop()
