class  firstinheritence():
    

    def first(self):
        x=(input)
        y="hi, {} This is first demo for single heritance"
        print (x)
        print (y.format(x))

class secondinheritence(firstinheritence):
    def second(self):
        print ("hi, This is second demo for single heritance")
ob = secondinheritence()
ob.first()
ob.second()



