#include <iostream>

using namespace std;//namespace example

namespace number1
{
    int x=2;
   void sample()
   {
     cout << "this is sample number1:"  <<endl;

    }

}
namespace number2
{
 int x=5;
 void sample()
 {
     cout <<"this is sample number2:"<<endl;
 }


}

int main()
{

    cout << number1::x << endl;
    number1::sample();
    cout << number2::x <<endl;
    number2::sample();
    return 0;
}
