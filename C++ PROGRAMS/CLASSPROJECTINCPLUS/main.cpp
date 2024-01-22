#include <iostream>

using namespace std;
class myfirstclass
{
    public:
    int a;


    void multiply()
    {
        int x,y;
        cout<<"\nenter the two values\n";
        cin >> x >>y;
        cout<< "the multiplied value   "<<(x*y);

    }
void division()
{
    int x,y;
    cout<<"\nenter the two values\n";
    cin >> x >>y;
        cout<< "the divided value  "<<(x/y);
}
int subtraction()
{
  int x,y;
    cout<<"\nenter the two values\n";
    cin >> x >>y;
        cout<< "the subtracted value  "<<(x-y);
}
void modulas();
};
void myfirstclass::modulas()
{
    int x,y;
    cout<<"\nenter the two values\n";
    cin >> x >>y;
        cout<< "the modulas value  "<<(x%y);
}

int addition()
{
    int b,c,d;
    cout<<"\nenter the two values\n";
    cin>>b >>c;
    d=b+c;
    cout<<"\nthe added value  "<<d;

}

int main()
{
    addition();
    myfirstclass mfc;
   // cout << mfc.a;
     mfc.multiply();
mfc.division();
mfc.modulas();
    return 0;
}
