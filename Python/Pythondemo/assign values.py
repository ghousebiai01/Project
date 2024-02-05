#assign values1
x,y,z= "hi ",  "This ", "Ghouse Bi"

print(x)
print(y)
print(z)
#assign values2
x=y=z="Ghouse bi"
print(x);
print(y);
print(z);


#assign values3

fruits= ["hi ",  "This ", "Ghouse Bi"]
x,y,z=fruits
print(fruits)
print(x)  #hi
z,y,x=fruits  #= ["hi ",  "This ", "Ghouse Bi"]
print(x)  #ghousebi
print(fruits)
print(x,y,z)
print(z,y,x)

# Output variables
x="h"
y="a"
z="i"
print(x,y,z)
print(x+y+z)
a=5
print(x,y,z,5)
print(x,y,z,a)

 s= "hi"
 t="dears"

def myexample():
 
  s="hi"
  t="dears"
  global s,t
  myexample()
 
print(s+t)
