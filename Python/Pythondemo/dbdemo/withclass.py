from tkinter import *
import mysql.connector

win=Tk()

win.title("MySQL DB Demo")
win.geometry("300x300")


class manipulation:
    def __init__(self):
        frametop=Frame(win, bg="red",width=800,height=300,padx=10,pady=10)
        frametop.pack(side=TOP)
        buttoninsert=Button(frametop,text="Insert").pack(padx=10,pady=10)
        buttonupdate=Button(frametop, text="Update").pack(padx=10,pady=10)
        buttondelete=Button(frametop,text="Delete").pack(padx=10,pady=10)

run=manipulation()
win.mainloop()