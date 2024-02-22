from tkinter import*
from tkinter import messagebox
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
    
        return dbcon
    #print("connected to database at ",dbcon) 

 


class modify():
    def __init__(self):
        frametop=Frame(app, bg="black",width=800, height=300, padx=10,pady=10)
        frametop.pack(side = TOP)
        btninsert=Button(frametop,text="INSERT", command=self.insertvalues1).pack(padx=10, pady=10)
        btnupdate=Button(frametop,text="UPDATE", command=self.update).pack(padx=10, pady=10)
        btndelete=Button(frametop,text="DELETE").pack(padx=10, pady=1)

    
def insertvalues1():
    
    val1=txtbox1.get()
    val2=txtbox2.get()
    val3=txtbox3.get()
    val4=txtbox4.get()
    val5=txtbox5.get()
    val6=txtbox6.get()

    e_con=MyDBConnection()
    result=e_con.cursor()

    statement="insert into student_marks(NAME,TAMIL,ENGLISH,MATHS,SCIENCE,SOCIAL_SCIENCE) values(%s,%s,%s,%s,%s,%s);"
    valuepass=(val1,val2,val3,val4,val5,val6)
    result.execute(statement,valuepass)
    e_con.commit()
    print(messagebox.showinfo("Information","Data Inserted"))
    print(result.rowcount," row inserted")

def deletevalues():
    val0=txtbox0.get()
    #   val1=txtbox1.get()
    #   val2=txtbox2.get()
    #   val3=txtbox3.get()
    #   val4=txtbox4.get()
    #   val5=txtbox5.get()
    #   val6=txtbox6.get()
        
    e_con=MyDBConnection()
    result=e_con.cursor()

    statement="delete from student_marks where SNO=(%s);"
    valuepass=(val0,)
    result.execute(statement,valuepass)
    e_con.commit()
    print(messagebox.showinfo("Information","Data Deleted Succesfully"))
    print(result.rowcount," row deleted")

def update():
    val0=txtbox0.get()
    val2=txtbox2.get()
    val3=txtbox3.get()
        

    e_con=MyDBConnection()
    result=e_con.cursor()

    statement="update student_marks set TAMIL=(%s),ENGLISH=(%s) where SNO=(%s);"
    valuepass=(val2,val3,val0)
    result.execute(statement,valuepass)
    e_con.commit()
        
    print(messagebox.showinfo("Information","Data Updated Succesfully"))
        
    print(result.rowcount, "row updated")

lblTitle=Label(app,text="marks statement",fg="pink",font=(",80"),bg="green")
lblTitle.grid(row=0,columnspan=15,padx=200,pady=40)
lblTitle=Label(app,text="NAME",fg="black",font=(",40"))
lblTitle.grid(row=1,columnspan=6,padx=40,pady=40)
lblTitle=Label(app,text="STUDENT ID",fg="black",font=(",40"))
lblTitle.grid(row=0,columnspan=3,padx=40,pady=40)

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
txtbox0=Entry(app,width=40)
txtbox0.grid(row=0,column=5)
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
txtbox6=Entry(app,width=40)
txtbox6.grid(row=6,column=8)
clickme=Button(app,text="Insert",bg="red",command=insertvalues1)
clickme.grid(row=2,column=25,padx=10,pady=10)
clickme=Button(app,text="Delete",bg="red",command=deletevalues)
clickme.grid(row=2,column=27,padx=30,pady=10)
clickme=Button(app,text="Update",bg="red",command=update)
clickme.grid(row=4,column=25,padx=10,pady=10)
clickme=Button(app,text="Reset",bg="red")
clickme.grid(row=4,column=27,padx=30,pady=10)
modify=Button(app,text="changes",command=modify)
modify.grid(row=2,column=30)

    
class modify():
     def __init__(self):
        frametop=Frame(app, bg="black",width=800, height=300, padx=10,pady=10)
        frametop.pack(side = TOP)
        btninsert=Button(frametop,text="INSERT", command=self.insertvalues2).pack(padx=10, pady=10)
        btnupdate=Button(frametop,text="UPDATE", command=self.update).pack(padx=10, pady=10)
        btndelete=Button(frametop,text="DELETE").pack(padx=10, pady=1)

     def insertvalues2():
    
      val1=txtbox1.get()
      val2=txtbox2.get()
      val3=txtbox3.get()
      val4=txtbox4.get()
      val5=txtbox5.get()
      val6=txtbox6.get()

      e_con=MyDBConnection()
      result=e_con.cursor()

      statement="insert into student_marks(NAME,TAMIL,ENGLISH,MATHS,SCIENCE,SOCIAL_SCIENCE) values(%s,%s,%s,%s,%s,%s);"
      valuepass=(val1,val2,val3,val4,val5,val6)
      result.execute(statement,valuepass)
      e_con.commit()
      print(messagebox.showinfo("Information","Data Inserted"))
      print(result.rowcount," row inserted")


     


run=modify()

app.config(modify)

app.mainloop()




