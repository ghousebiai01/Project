import tkinter as tik

win=tik.Tk()

win.geometry("500x500")

win.title("My First Menubar Program")

def quit():
    win.destroy()

def aboutmyprogram():
    abot=tik.Tk()
    abot.title("About My Program")
    abot.geometry("300x300")
    welcome="""Hi! This is Ghouse Bi,\n
    learning menubar making in python"""
    lntinfo=tik.Label(abot,text=welcome,bg="blue")
    lntinfo.pack()
    abot.mainloop()

menubar=tik.Menu(win)

filemenu=tik.Menu(win)
filemenu=tik.Menu(menubar, tearoff=0)
menubar.add_cascade(label="File",menu=filemenu, underline=0)
filemenu.add_command(label="New", underline=0, accelerator="Alt+F")
filemenu.add_command(label="New Window", underline=4, accelerator="Alt+F")
filemenu.add_command(label="Open", underline=0, accelerator="Alt+F")
filemenu.add_command(label="Save", underline=0, accelerator="Alt+F")
filemenu.add_command(label="Save As", underline=4, accelerator="Alt+F")
filemenu.add_separator()
filemenu.add_command(label="Page Setup", underline=7, accelerator="Alt+F")
filemenu.add_command(label="Print", underline=0, accelerator="Alt+F")
filemenu.add_separator()
filemenu.add_command(label="Exit", underline=1, command=quit, accelerator="Ctrl+2")

editmenu=tik.Menu(menubar, tearoff=0)
menubar.add_cascade(label="Edit",menu=editmenu)
editmenu.add_command(label="Undo",  underline=0, accelerator="Alt+F")
editmenu.add_command(label="Redo",  underline=4, accelerator="Alt+F")
editmenu.add_separator()
editmenu.add_command(label="Copy",  underline=0, accelerator="Alt+F")
editmenu.add_command(label="Cut",  underline=0, accelerator="Alt+F")
editmenu.add_command(label="Paste",  underline=0, accelerator="Alt+F")

viewmenu=tik.Menu(menubar)
menubar.add_cascade(label="View")

helpmenu=tik.Menu(menubar,tearoff=0)
menubar.add_cascade(label="Help",menu=helpmenu)
helpmenu.add_command(label="About",  underline=0, accelerator="Alt+F", command=aboutmyprogram)

win.config(menu=menubar)

win.mainloop()