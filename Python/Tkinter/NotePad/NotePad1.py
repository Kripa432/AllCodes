#! /usr/local/bin/python2
from tkinter import *
root =Tk()
root.geometry("651x481+51+51")
root.title("Untitled NotePad")


#menu bar function


menubar=Menu(root)

filemenu=Menu(menubar,tearoff=1)
filemenu.add_command(label="New",accelerator="Ctrl+N")
filemenu.add_command(label="Open",accelerator="Ctrl+O")
filemenu.add_command(label="Save",accelerator="Ctrl+S")
filemenu.add_command(label="Save As",accelerator="Shift+Ctrl+S")
filemenu.add_separator()
filemenu.add_command(label="exit",accelerator="Alt+F4")
menubar.add_cascade(label="File",menu=filemenu)

editmenu=Menu(menubar,tearoff=1)
editmenu.add_command(label="Undo",accelerator="Ctrl+Z")
editmenu.add_command(label="Redo",accelerator="Ctrl+Y")
editmenu.add_separator()
editmenu.add_command(label="Cut",accelerator="Ctrl+X")
editmenu.add_command(label="Copy",accelerator="Ctrl+C")
editmenu.add_command(label="Paste",accelerator="Ctrl+V")
editmenu.add_command(label="Delete",accelerator="Del")
editmenu.add_command(label="clear",accelerator="Alt+Ctrl+C")
editmenu.add_separator()
editmenu.add_command(label="Find",accelerator="Ctrl+F")
editmenu.add_command(label="Replace",accelerator="Ctrl+R")
editmenu.add_separator()
editmenu.add_command(label="Select All",accelerator="Ctrl+A")
menubar.add_cascade(label="Edit",menu=editmenu)

viewmenu=Menu(menubar,tearoff=1)
viewmenu.add_command(label="Show Status Bar",accelerator="")
themesmenu=Menu(viewmenu)
themesmenu.add_command(label="white")
themesmenu.add_command(label="grey")
themesmenu.add_command(label="Lovely Lavender")
themesmenu.add_command(label="Aqua Marine")
themesmenu.add_command(label="Bold Biedge")
themesmenu.add_command(label="Cobalt Blue")
themesmenu.add_command(label="Olive Green")

viewmenu.add_cascade(label="Themes",menu=themesmenu)
menubar.add_cascade(label="view",menu=viewmenu)

helpmenu=Menu(menubar)
helpmenu.add_command(label="View help")
helpmenu.add_command(label="About NotePad")
menubar.add_cascade(label="help",menu=helpmenu)


label1=Label(root,bg="#e3ffff",height=2,width=1200)
label1.pack(side=TOP,expand=NO, fill=X)

label2=Label(root,bg="#e3ffff",height=800,width=2)
label2.pack(side=LEFT,expand=NO, fill=Y , anchor=W)


label4=Label(root,bg="#e3ffff" , height=800 , width=2)
label4.pack(side=RIGHT, fill=Y)

label3=Label(root,bg="#e3ffff",height=2,width=1200)
label3.pack(side=BOTTOM, expand=NO, fill=X )

textPad=Text(root,undo=TRUE, bg="light yellow",padx=10,pady=10)
textPad.pack(expand=YES,fill=BOTH)

scrollbar=Scrollbar(label4)

scrollbar.config(command=textPad.yview)
textPad.configure(yscrollcommand=scrollbar.set)

scrollbar.pack(side=RIGHT,fill=Y)

infobar=Label(label3)
infobar.pack(expand=NO, side=RIGHT , anchor =SE)





root.config(menu=menubar)


root.mainloop()
