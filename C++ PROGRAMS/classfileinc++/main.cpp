#include <iostream>

using namespace std;

class arithmaticexamples
{
public:
    int x;

        void addition()
        {
        int a,b;
        cout << "\nEnter the two numbers\n";
        cin >> a >> b;
        cout <<"\nThe added value of two numbers:\n  "<<(a+b);
        cout <<"\n";
    }

        int subtraction()
        {


        int a,b;
        cout << "Enter the two numbers\n";
        cin >> a >> b;
        cout <<"\nThe subtracted value of two numbers:\n"<<(a-b);

    }

        int multiplication()
        {

        int a,b;
        cout << "\nEnter the two numbers\n";
        cin >> a >> b;
        cout <<"\nThe multiplied value of two numbers:\n"<<(a*b);
    }
    void division();
    void modulas();
    void oddoreven();
};
void arithmaticexamples ::  division()
{
   int a,b;
        cout << "\nEnter the two numbers\n";
        cin >> a >> b;
        cout <<"\nThe divided value of two numbers:\n"<<(a/b);
}
void arithmaticexamples ::  modulas()
{

        int a,b;
        cout << "\nEnter the two numbers\n";
        cin >> a >> b;
        cout <<"\nThe modulas value of two numbers:\n"<<(a%b);
}
void arithmaticexamples :: oddoreven()
{
    int a;
    cout << "\nEnter the number for check odd or even\n";
    cin >> a;
    if(a%2==0)
    {
    cout << "\n The enetered number is even";

}
else{cout << "\n The enetered number is odd";}
}
int increment()

{
  int a;
    cout << "\nEnter the number for increment\n";
    cin >> a;
    a++;
    cout << "\n The entered number increment is:"<<a;
}
int main()
{

arithmaticexamples ae;
    ae.addition();
    ae.subtraction();
    ae.multiplication();
    ae.division();
    ae.modulas();
    ae.oddoreven();
    increment();

    return 0;
}
