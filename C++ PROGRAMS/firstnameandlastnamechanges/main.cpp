#include <iostream>

using namespace std;

int main()
{

    string firstname,lastname;
    cin>>firstname>>lastname;

    cout << firstname+" "+lastname << endl;
    string fullname = firstname.append(lastname);
    cout <<firstname<<endl;

    firstname.push_back('e');
    cout << firstname<<endl;

    cout <<firstname.length()<< endl;
    cout <<firstname.size();

    return 0;
}
