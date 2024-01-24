

#include <iostream>

using namespace std;
class accessspecifier{
//private:
  //  string name;
    //int z=9;
//protected:
   // int y=5;
public:

//int a=5,b=7,c;

/*int avalue() {

 cout <<z;
 c=y;
 cout <<c;
 }
 int getvalue(int d)
 { return y;}*/

 //cout<<d;}
string name;

void setvalue()
{


   cout<< "Enter your name";
    cin>>name;

}

  string getvalue2()

     {

return name;
     }
//}

};
/*class intvoid1{
private:
    int p=2;
public:

    void getp()
    {
    int q;
    q=p;

}
/*int gettingp1()
{
int q;
    return q;

}
};*/





int main()
{

accessspecifier ae;
/*cout <<ae.a;

/*cout <<ae.a+ae.b;//12
 int a;
 cout <<a-a;//0*/
 //ae.avalue();//9,5
 /*int d;
 ae.gettingvalue(d);//5
cout<< "My lucky number is:" <<ae.getvalue(5);*/



 ae.setvalue();

 cout <<ae.getvalue2();

//intvoid1 iv;


//iv.getp();

//iv.gettingp1();
    return 0;
}

