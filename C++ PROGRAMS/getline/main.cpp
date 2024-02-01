#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "Enter your name" << endl;
   // cin>>name;
     //fflush(stdin);
    //cout<<"Your name is:"<< endl;

     getline(cin,name);
     cout << name<< ", is it??" <<endl;

    return 0;
}
