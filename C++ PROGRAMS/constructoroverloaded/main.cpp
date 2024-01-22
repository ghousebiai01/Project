#include <iostream>

using namespace std;
class constructoroverload{
public:

    constructoroverload()
    {
        int a,b;
        cout << "\nEnter the two numbers\n";
        cin >> a >> b;
        cout <<"\nThe added value of two numbers:\n  "<<(a+b);
        cout <<"\n";

    }

   constructoroverload(int x,int y)
   {
     cout << "\nEnter the two numbers\n";
      cin >> x >> y;
        cout <<"\nThe added value of two numbers:\n  "<<(x+y);
        cout <<"\n";
   }
 void construct()
      {
          int j,k;
      cout <<"\nThe added value of two numbers:\n  "<<(j+k);
   }

};

int main()
{
    int x,y;
    constructoroverload col;
    constructoroverload(x,y);
    int j,k;
    cout <<"enter the two numbers\n";
    cin >> j >> k;
    col.construct();
    return 0;
}
