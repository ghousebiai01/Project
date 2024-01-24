

#include <iostream>

using namespace std;
class settergetter{
private:
    string name;
    int z=9;

public:

int a,b,c;

void setavalue() {


 c=z;
 cout <<c<<endl;
 }
 int getavalue(int c)
 { return z;}             //9



void setvaluestring1()
{


   cout<< "Enter your name"<<endl;
    cin>>name;

}

  string getvaluestring2()

     {

return name;
     }

};






int main()
{
int a,c;
settergetter sg;
sg.setavalue();
cout <<"The private specifier value is"<<sg.getavalue(c)<<endl;
sg.setvaluestring1();
cout <<"hai "<<sg.getvaluestring2()<<endl;

    return 0;
}

