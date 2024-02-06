#mycondition in def()
a="beautiful"
def mycond():
 a="very"
 global b 
 global c
 b= " beautiful"
 c="!"
 print("life is" +b)
 print("life is " +a+b) 
mycond()
print("life is "+b)
print("life is " +a+b+c) 

 
