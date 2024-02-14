class parents:
    def __init__(self, fathername, mothername, familyname):

        
        self.familyname1=familyname
        self.fathername1=fathername
        self.mothername1=mothername
        
        
    def welcome(self):
        print("Welcome to", self.familyname1,"wishes from", self.fathername1, "and", self.mothername1)
print("hai")


class myfamily(parents):
    def a(self):
        print("Hi, My life is",self.familyname1)

class myfamilymembers(parents):
    def __init__(self, fathername, mothername, brothers, sisters, familyname):
        super().__init__(fathername, mothername, familyname)
        self.broname=brothers
        self.sisname=sisters
        
    def welcome2(self):
        print("welcome to", self.familyname1,"My family is big and My father is", self.fathername1, "My mother is", self.mothername1, "and we are ", self.broname, self.sisname)


x=myfamilymembers("Shafiyullah Khan","Zarina Begam","4 Brothers","4 Sisters","Happy Family")
z=myfamilymembers("Raja","Rani","4 boys","4 girls","happy family")
x.welcome()
x.welcome2()
z.welcome ()
z.welcome2()
y=myfamily("Happy","and","Joy")
y.a()





 