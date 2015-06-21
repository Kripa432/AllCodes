#! /usr/local/bin/python2
from Tkinter import *
root =Tk()
Label(root,text="username").grid(row=0,sticky=W)
Label(root,text="password").grid(row=1,sticky=W)
Entry(root).grid(row=0, column=1, sticky=E)
Entry(root).grid(row=1,column=1, sticky=E)

root.mainloop()
