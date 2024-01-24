

#include <iostream>

using namespace std;
class accesspecifier{
public:
    int x=3,y=4,z=7,w;
    };
class settergetter{
private:
    string name,name1="Ghouse Bi";
    int z=9;

public:

int a,b,c;

void setavalue() {


 c=z;
 cout <<c;
 }
 int getavalue(int c)
 { return z;}


//string name;

void setvaluestring1()
{


   cout<< "Enter your name";
    cin>>name;

}

string getvaluestring2()

     {

return name;
     }


void setvaluestring2()
{
string name2;

   name2=name1;

}
     string getvaluestring3()

     {
string name2;
return name1;
     }


};






int main()
{
    //accessspecifier
    class accesspecifier as;
    int x,y,w;
    cout <<as.x+as.y<<endl;  //7

    as.w=12;
    cout <<as.w+10<<endl;  //22
     //settergetter cin
int c;
settergetter sg;
sg.setavalue();   //int
cout <<"The private specifier value is"<<sg.getavalue(c)<<endl;   //9
sg.setvaluestring1();   //string
cout <<"hai "<<sg.getvaluestring2()<<endl;
            //settergetter setvalue
sg.setvaluestring2();
cout<<"hi "<<sg.getvaluestring3()<<endl;
return 0;
}

