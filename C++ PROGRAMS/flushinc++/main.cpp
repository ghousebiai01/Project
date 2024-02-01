#include <iostream>

using namespace std;

int main()
{
   string name;

    cout << "Enter your name" << endl;

    cin >> name;
    cout <<"Your Name is:" <<name<< endl;
     fflush(stdin);
    cout << "Enter your name" << endl;

    getline(cin,name);
    cout <<"Your Name is:" <<name<< endl;
    return 0;
}
