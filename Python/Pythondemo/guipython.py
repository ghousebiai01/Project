from tkinter import *

app=Tk()
app.title("My first Python GUI app")
app.geometry("500x400+400+200")
app.config(bg="black")
app.state("zoomed")
def clickresult():
    a=3
    b=4
    c=a+b
    lblTitle.config(text=c, fg="red")

lblTitle=Label(app,text="Simple Calculations")
lblTitle.grid(row=0, column=0,padx=200,pady=20)

inputbox1=Entry(app,width=30)
inputbox1.grid(row=2,column=2)



lblTitle1=Label(app,text="Enter the values")
lblTitle1.grid(row=1,column=1,padx=40,pady=40)

inputbox2=Entry(app, width=30)
inputbox2.grid(row=1,column=2)

clickme=Button(app,text="addition",command=clickresult,)
clickme.grid(row=2,column=8,padx=40,pady=40)

app.mainloop()