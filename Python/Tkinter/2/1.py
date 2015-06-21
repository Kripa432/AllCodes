#! /usr/local/bin/python2
from Tkinter import *
root =Tk()
# Adding Menubar in the widget
menubar = Menu(root)
filemenu = Menu(menubar, tearoff=0) # File menu
root.config(menu=menubar) # this line actually displays menu

root.mainloop()
