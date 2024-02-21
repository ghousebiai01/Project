from tkinter import*
import mysql.connector


app=Tk()
app.title("STUDENT MARK ENTRY")
app.geometry("500x200+500+100")
app.config(bg="green")

def MyDBConnection():
    
    dbcon=mysql.connector.connect(
    host="192.168.1.240",
    user="AIBATCH01",
    password="AI@123",
    database="ai_ghouse_bi"
    
)
    #return dbcon
    print("connected to database at ",dbcon)        

lblTitle=Label(app,text="marks statement",fg="pink",font=(",80"),bg="green")
lblTitle.grid(row=0,columnspan=6,padx=40,pady=40)
lblTitle=Label(app,text="NAME",fg="black",font=(",40"))
lblTitle.grid(row=1,columnspan=6,padx=40,pady=40)
lblTitle=Label(app,text="ENGLISH",fg="black",font=(",40"))
lblTitle.grid(row=2,columnspan=6,padx=40,pady=40)
lblTitle=Label(app,text="TAMIL",fg="black",font=(",40"))
lblTitle.grid(row=3,columnspan=6,padx=40,pady=40)
lblTitle=Label(app,text="MATHS",fg="black",font=(",40"))
lblTitle.grid(row=4,columnspan=6,padx=40,pady=40)
lblTitle=Label(app,text="SCIENCE",fg="black",font=(",40"))
lblTitle.grid(row=5,columnspan=6,padx=40,pady=40)
lblTitle=Label(app,text="SOCIAL_SCIENCE",fg="black",font=(",40"))
lblTitle.grid(row=6,columnspan=6,padx=40,pady=40)
txtbox1=Entry(app,width=40)
txtbox1.grid(row=1,column=8)
txtbox2=Entry(app,width=40)
txtbox2.grid(row=2,column=8)
txtbox3=Entry(app,width=40)
txtbox3.grid(row=3,column=8)
txtbox4=Entry(app,width=40)
txtbox4.grid(row=4,column=8)
txtbox5=Entry(app,width=40)
txtbox5.grid(row=5,column=8)
txtbox4=Entry(app,width=40)
txtbox4.grid(row=6,column=8)
clickme=Button(app,text="Insert",bg="red")
clickme.grid(row=2,column=25,padx=10,pady=10)
clickme=Button(app,text="Delete",bg="red")
clickme.grid(row=2,column=27,padx=30,pady=10)
clickme=Button(app,text="Update",bg="red")
clickme.grid(row=4,column=25,padx=10,pady=10)
clickme=Button(app,text="Reset",bg="red")
clickme.grid(row=4,column=27,padx=30,pady=10)






app.mainloop()