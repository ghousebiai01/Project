from tkinter import *

app=Tk()
app.title("My first Python GUI app")
app.geometry("500x500+500+100")
app.config(bg="black")
app.state("zoomed")
def addition():
    a=int(inputbox1.get())
    b=int(inputbox2.get())
    c=a+b
    lblvalue.config(text=c, fg="red",bg="white")

def substraction():
    a=int(inputbox1.get())
    b=int(inputbox2.get())
    c=a-b
    lblvalue.config(text=c,fg="red",bg="white")

def multiplication():
    a=int(inputbox1.get())
    b=int(inputbox2.get())
    c=a*b
    lblvalue.config(text=c,fg="red",bg="white")

def division():
    a=int(inputbox1.get())
    b=int(inputbox2.get())
    c=a/b
    lblvalue.config(text=c,fg="red",bg="white")

def modulas():
    a=int(inputbox1.get())
    b=int(inputbox2.get())
    c=a%b
    lblvalue.config(text=c,fg="red",bg="white")

def power():
    a=int(inputbox1.get())
    b=int(inputbox2.get())
    c=a**b
    lblvalue.config(text=c,fg="red",bg="white")

def floordivsion():
    a=int(inputbox1.get())
    b=int(inputbox2.get())
    c=a//b
    lblvalue.config(text=c,fg="red",bg="white")

def plusequalto():
    a=int(inputbox1.get())
    
    a+=5
    
    c=a
    
    lblvalue.config(text=c,fg="red",bg="white")
    
def plusequalto1():

     b=int(inputbox2.get())
    
     b+=5
     d=b
    
     lblvalue.config(text=d,fg="red",bg="white")



    

# def minusequalto():
#     a=int(inputbox1.get())
#     b=int(inputbox2.get())
    


# def equaltomulti():
     


# def equaltodivide():


# def greaterthan():


# def lesserthan():




    


    

lblTitle= Label(app,text="Simple Calculations",bg="blue",fg="pink",font=(",18"))
lblTitle.grid(row=0, column=25,pady=30)

lblmsg=Label(app,text="'a' ")
lblmsg.grid(row=1,column=20)



inputbox1=Entry(app,width=60)
inputbox1.grid(row=1,column=25,)

lblmsg2=Label(app, text="'b'")
lblmsg2.grid(row=2,column=20,pady=20)

inputbox2=Entry(app, width=60)
inputbox2.grid(row=2,column=25,pady=20)

lblmsg3=Label(app,text="RESULT")
lblmsg3.grid(row=3,column=20)


lblvalue=Label(app,width=40)
lblvalue.grid(row=3,column=25,padx=20)



buttonaddition=Button(app, text="+",command=addition)
buttonaddition.grid(row=4,column=1,padx=20,pady=25)

buttonsubtraction=Button(app, text="-",command=substraction)
buttonsubtraction.grid(row=4,column=3,padx=20)

buttonmultiplication=Button(app, text="x",command=multiplication)
buttonmultiplication.grid(row=4,column=5,padx=20)

buttondivision=Button(app, text="/",command=division)
buttondivision.grid(row=4,column=7,padx=20)

buttonmodulas=Button(app, text="%",command=modulas)
buttonmodulas.grid(row=4,column=9,padx=20)

buttonsubtraction=Button(app, text="x^",command=power)
buttonsubtraction.grid(row=4,column=11,padx=20)

buttonfloordivsion=Button(app, text="//",command=floordivsion)
buttonfloordivsion.grid(row=4,column=13,padx=20)

buttonplusequalto=Button(app, text="+=5",command=lambda:[(plusequalto(),plusequalto1())])
buttonplusequalto.grid(row=5,column=1,padx=20)








# buttonsubtraction=Button(app, text="-=5",command=minusequalto)
# buttonsubtraction.grid(row=5,column=3,padx=20)

# buttonsubtraction=Button(app, text="*=5",command=equaltomulti)
# buttonsubtraction.grid(row=5,column=5,padx=20)

# buttonsubtraction=Button(app, text="/=5",command=equaltodivide)
# buttonsubtraction.grid(row=5,column=7,padx=20)

# buttonsubtraction=Button(app, text=">>",command=greaterthan)
# buttonsubtraction.grid(row=5,column=11,padx=20)


# buttonsubtraction=Button(app, text="<<",command=lesserthan)
# buttonsubtraction.grid(row=5,column=13,padx=20)









app.mainloop()