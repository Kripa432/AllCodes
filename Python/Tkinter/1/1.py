#! /usr/local/bin/python2

from Tkinter import *
root =Tk()
mylabel=Label(root,text="i am a label wiget")
mybutton=Button(root,text="i am a button")
mybutton.pack()
mylabel.pack()
menubar=Frame(root)
Label(menubar,text="menubar label-Enter usename").pack()
Entry(menubar,width=30).pack()
Button(menubar,text="menubar button-search").pack()
v=IntVar()

Checkbutton(menubar,text="checkbuttom",variable=v).pack()
Radiobutton(menubar,text="male",variable=v).pack()
OptionMenu(menubar,v,"India","USA","Australia","others").pack()
#Bitmap(menubar,text="bitmap")

menubar.pack()
#frame=Frame(root)
#frame.pack()
#myframe1=Frame(root)
#myframe1.pack()
#myframe2=Frame(root)
#myframe2.pack()



root.mainloop()
