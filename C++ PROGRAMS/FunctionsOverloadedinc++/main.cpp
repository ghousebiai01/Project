#include <iostream>

using namespace std;

class functionoverload
{
    public:
    int addition()
    {
        int a,b;
    cout <<"\nEnter the two values\n";
    cin >> a>>b;
    cout <<"\n The addition two values\n"<<(a+b);
    }
    float additionfloat()
    {
     float a,b;
    cout <<"\nEnter the two decimal values\n";
    cin >> a>>b;
    cout <<"\n The addition two values\n"<<(a+b);
    }
    void addition1(int x1,int x2,int x3)
    {


    cout <<"\n The addition three values\n"<<(x1+x2+x3);

    }
    float additionfloat2(float x4,float x5,float x6)
    {


    cout <<"\n The addition three decimal values\n"<<(x4+x5+x6);
    }
};


int main()
{

  functionoverload obo;
  obo.addition();
  obo.additionfloat();
  obo.addition1(2,3,4);
  obo.additionfloat2(2.3,4.5,5.5);



    return 0;
}
