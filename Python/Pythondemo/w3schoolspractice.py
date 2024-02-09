
import random
print (random.randrange(10,90))
print('hello')
a= """Hi guys! How are you? Is this of for you? what about youself?"""
for x in a:
    print(x)
a= a.split(" ")
print (a)
for n in a:
    print(n)
a2="Happy Life"
if "Happy" in a2:
    print("Yes you are right")
print (len(a2))
a3="good life"
print (a3+a2)
print (a3+" "+a2)
print("My name is Ghouse Bi. I am living   \ba "  +  a3)
age=34
txt="My age is {}"
print(txt.format(age))
