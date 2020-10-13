from tkinter import *
import stddraw as d
master = Tk()

e = Entry(master)
e.pack()



def draw(N):

    d.setXscale(0, N)
    d.setYscale(0, N)
    for i in range(N):
        for j in range(N):
            if ((i + j) % 2) != 0:
                d.setPenColor(d.BLACK)
            else:
                d.setPenColor(d.RED)
            d.filledSquare(i + .5, j + .5, .5)
            d.show(0)

def callback():
    n = int(e.get())
    draw(n)

b = Button(master, text='Dibuja', width = 20, command=callback)
b.pack()

mainloop()
