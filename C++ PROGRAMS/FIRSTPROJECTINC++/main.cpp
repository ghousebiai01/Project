#include<iostream>
using namespace std;
int main()
{
     value1,value2,total,op,sub;
    cout <<"\nEnter the value a\n";
    cin >> value1;
    cout <<"\nEnter the value b\n";
    cin >> value2;
   /cout <<"\nEnter the operator\n";
    cin >>op;
    switch(op)
    {
    case 1:
        total=value1+value2;
        cout<<"\nThe added value of a & b is\n"<<total;
        break;
        case 2:
        sub=value1-value2;
        cout<<"\nThe subtracted value of a & b is   "<<sub;
        break;
    }

    return  0;
}
