#! /usr/local/bin/python3
from tkinter import *
from tkinter import messagebox as tkMessageBox
from tkinter import filedialog as tkFileDialog

import os
root =Tk()
root.geometry("651x481+51+51")
root.title("Untitled NotePad")

#############
clrschms = {
'1. Default White': '000000.FFFFFF',
'2. Greygarious Grey': '83406A.D1D4D1',
'3. Lovely Lavender': '202B4B.E1E1FF' ,
'4. Aquamarine': '5B8340.D1E7E0',
'5. Bold Beige': '4B4620.FFF0E1',
'6. Cobalt Blue': 'ffffBB.3333aa',
'7. Olive Green': 'D1E7E0.5B8340',
}



#label present above below right left of menu bar

label1=Label(root,bg="light sea green",height=2,width=1200)
label1.pack(side=TOP,expand=NO, fill=X)

label2=Label(root,bg="antique white" , height=800 , width=2)
label2.pack(side=LEFT,expand=NO, fill=Y)

label4=Label(root,bg="#e3ffff",height=800,width=2)
label4.pack(side=RIGHT,expand=NO, fill=Y)

textPad=Text(root,undo=TRUE, bg="light yellow",padx=10,pady=10)
textPad.pack(expand=YES,fill=BOTH)

label3=Label(root,bg="#e3ffff",height=2,width=1200)
label3.pack(side=BOTTOM, expand=NO, fill=X )

#menu bar function'
def new_file():
	if tkMessageBox.askokcancel("Save","Do you want to save current file"):
		
	root.title("Untitled")
	global filename
	filename = None
	textPad.delete(1.0,END)


def open_file():
	global filename
	filename=tkFileDialog.askopenfilename(defaultextension=".txt",filetypes=[("All files","*.*"),("Text Documents","*.txt")])
	if filename=='':
		filename=None;
	else:
		root.title(os.path.basename(filename)+" -NotePad")
		textPad.delete(1.0,END)
		fh=open(filename,"r")
		textPad.insert(1.0,fh.read())
		fh.close()
def save():
	global filename
	try:
		f=open(filename,'w')
		letter = textPad.get(1.0, 'end')
		f.write(letter)
		f.close()
	except:
		save_as()
def save_as():
	try:
		f = tkFileDialog.asksaveasfilename(initialfile ='Untitled NotePad.txt', defaultextension=".txt",filetypes=[("All Files","*.*"),("Text Documents","*.txt"),("c/c++ Programs"),"*.cpp"])
		fh = open(f, 'w')
		textoutput = textPad.get(1.0, END)
		fh.write(textoutput)
		fh.close()
		root.title(os.path.basename(f) + " - pyPad")
	except:
		pass

def exit_editor(event=None):
	if tkMessageBox.askokcancel("Quilt","Do you Want to quilt?"):
		root.destroy()
	root.protocol('WM_DELETE_WINDOW', exit_command) # override close


########EDIT MENU Functions
def cut():
	textPad.event_generate("<<Cut>>")
def select_all():
	textPad.tag_add('sel','1.0','end')

def on_find():
	t2=Toplevel(root)
	t2.title('Find')
	t2.geometry('300x200+200+250')
	t2.transient(root)
	Label(t2,text="Find All:").grid(row=0, column=0 ,sticky='w')
	v=StringVar()
	e=Entry(t2,width=25,textvariable=v)
	e.grid(row=0, column=1 ,padx=2, pady=2 , sticky='we')
	e.focus_set()
	c=IntVar()
	Checkbutton(t2,text="Ignore Text case" , variable=c).grid(row=1 , column=1 ,sticky='e' , pady=2 , padx=2)
	Button(t2, text="Find All", underline=0, command=lambda:
			search_for(v.get(), c.get(), textPad, t2, e)).grid(row=0,column=2, sticky='e'+'w', padx=2, pady=2)
	def close_search():
		textPad.tag_remove('match', '1.0', END)
		t2.destroy()
	t2.protocol('WM_DELETE_WINDOW', close_search)#override close

def search_for(needle, cssnstv, textPad, t2, e) :
	textPad.tag_remove('match', '1.0', END)
	count =0
	if needle:
		pos = '1.0'
		while True:
			pos = textPad.search(needle, pos, nocase=cssnstv,stopindex=END)
			if not pos: break
			lastpos = '%s+%dc' % (pos, len(needle))
			textPad.tag_add('match', pos, lastpos)
			count += 1
			pos = lastpos
	textPad.tag_config('match', foreground='red',background='yellow')
	e.focus_set()
	t2.title('%d matches found' %count)



def update_line_number(event=None):
	txt = ''
	if showln.get():
		endline, endcolumn = textPad.index('end-1c').split('.')
		txt = '\n'.join(map(str, range(1, int(endline))))
		label2.config(text=txt, anchor='nw')
	currline, curcolumn = textPad.index("insert").split('.')
	infobar.config(text= 'Line: %s | Column: %s' %(currline,curcolumn))

def show_info_bar():
	val = showinbar.get()
	if val:
		infobar.pack(expand=NO, fill=None, side=RIGHT,anchor='se')
	elif not val:
		infobar.pack_forget()


def theme():
	global bgc,fgc
	val = themechoice.get()
	clrs = clrschms.get(val)
	fgc, bgc = clrs.split('.')
	fgc, bgc = '#'+fgc, '#'+bgc
	textPad.config(bg=bgc, fg=fgc)

def popup(event):
	cmenu.tk_popup(event.x_root, event.y_root, 0)

def about(event=None):
	tkMessageBox.showinfo("About","Tkinter GUI Application\nCopyright@IERT 2013-17")

def helpbox(event=None):
	tkMessageBox.showinfo("Help","For help refer IERTlive.in")

#menubar label and options
menubar=Menu(root)

filemenu=Menu(menubar,tearoff=1)
filemenu.add_command(label="New",accelerator="Ctrl+N", command=new_file)
filemenu.add_command(label="Open",accelerator="Ctrl+O", command=open_file)
filemenu.add_command(label="Save",accelerator="Ctrl+S", command=save)
filemenu.add_command(label="Save As",accelerator="Shift+Ctrl+S", command=save_as)
filemenu.add_separator()
filemenu.add_command(label="exit",accelerator="Alt+F4", command=exit_editor)
menubar.add_cascade(label="File",menu=filemenu)

editmenu=Menu(menubar,tearoff=1)
editmenu.add_command(label="Undo",accelerator="Ctrl+Z")
editmenu.add_command(label="Redo",accelerator="Ctrl+Y")
editmenu.add_separator()
editmenu.add_command(label="Cut",accelerator="Ctrl+X", command=cut)
editmenu.add_command(label="Copy",accelerator="Ctrl+C")
editmenu.add_command(label="Paste",accelerator="Ctrl+V")
editmenu.add_command(label="Delete",accelerator="Del")
editmenu.add_command(label="clear",accelerator="Alt+Ctrl+C")
editmenu.add_separator()
editmenu.add_command(label="Find",accelerator='Ctrl+F', command=on_find)
editmenu.add_command(label="Replace",accelerator="Ctrl+R")
editmenu.add_separator()
editmenu.add_command(label="Select All",accelerator="Ctrl+A", command=select_all)
menubar.add_cascade(label="Edit",menu=editmenu)
showinbar=IntVar()
viewmenu=Menu(menubar,tearoff=1)
viewmenu.add_command(label="Show Status Bar",accelerator="")
viewmenu.add_checkbutton(label="Show Info Bar at Bottom",variable=showinbar ,command=show_info_bar)
themesmenu=Menu(viewmenu)
themesmenu.add_command(label="white")
themesmenu.add_command(label="grey")
themesmenu.add_command(label="Lovely Lavender")
themesmenu.add_command(label="Aqua Marine")
themesmenu.add_command(label="Bold Biedge")
themesmenu.add_command(label="Cobalt Blue")
themesmenu.add_command(label="Olive Green")

themechoice= StringVar()
themechoice.set('1. Default White')
for k in sorted(clrschms):
	themesmenu.add_radiobutton(label=k, variable=themechoice,command=theme)

#check box for theme menu
showln=IntVar()
showln.set(1)
	

update_line_number
viewmenu.add_checkbutton(label="show line number",variable=showln)

viewmenu.add_cascade(label="Themes",menu=themesmenu)
menubar.add_cascade(label="view",menu=viewmenu)

helpmenu=Menu(menubar)
helpmenu.add_command(label="View help",command=helpbox)
helpmenu.add_command(label="About NotePad",command=about)
menubar.add_cascade(label="help",menu=helpmenu)



scrollbar=Scrollbar(label4)

scrollbar.config(command=textPad.yview)
textPad.configure(yscrollcommand=scrollbar.set)

scrollbar.pack(side=RIGHT,fill=Y)
textPad.bind("<Any-KeyPress>", update_line_number)
#infobar=Label(label3)
#infobar.pack(expand=NO, side=RIGHT , anchor =SE)

infobar = Label(textPad, text='Line: 1 | Column: 0')
infobar.pack(expand=NO, fill=None, side=RIGHT, anchor='se')

textPad.bind('<Control-N>', new_file)
textPad.bind('<Control-n>', new_file)
textPad.bind('<Control-O>', open_file)
textPad.bind('<Control-o>', open_file)
textPad.bind('<Control-S>', save)
textPad.bind('<Control-s>', save)
textPad.bind('<Control-A>', select_all)
textPad.bind('<Control-a>', select_all)
textPad.bind('<Control-f>', on_find)
textPad.bind('<Control-F>', on_find)





root.config(menu=menubar)


root.mainloop()
