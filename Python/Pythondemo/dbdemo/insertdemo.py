from tkinter import *
import mysql.connector

win=Tk()
win.title("Insert into MySQL DB Demo")
win.geometry("500x500")


frameleft =Frame(win, bg="black",width=500,height=500,padx=30,pady=30)
frameleft.pack(side=LEFT)


frameright =Frame(win, bg="red",width=500,height=500)
frameright.pack(side=RIGHT)


lbl_Title_of_Operation=Label(frameleft,Text="Insert into MYSQL DB Demo")
lbl_Title_of_Operation.grid(row=0,columnspans=5)

lblName=Label(frameleft, text="Name")
lblName.grid(row=2,column=1,)



win.mainloop()