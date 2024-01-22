#include <iostream>

using namespace std;
class classoverload{
public:

    classoverload()
   {
        string str1= "Ghouse bi. S";
    cout << "hai! This is classoverload demo1 made by " << str1;
    }
    classoverload(string str2)
    {

     cout << " \nhai! This is classoverload demo2 made by " <<str2;
    }
    classoverload(int a){
        string str1;
     cout << " \nhai! This is classoverload demo"<<a <<str1;
    }
    };
   class classoload
    {
public:
    void coload()
    {
    string str1= "Ghouse bi. S";
    cout << "\nhai! This is classoverload demo1 made by " << str1;
    }
    int coload(string str2)
    {

     cout << " \nhai! This is classoverload demo2 made by " <<str2;
    }
    void coload(int a)
    {
        string str1;
     cout << " \nhai! This is classoverload demo\n"<<a <<str1;
    }
    };



int main()
{

  classoverload cov;
 classoverload cov2("Dhil Rose");
 classoverload cov3(3);
 classoload cov4;
 cov4.coload();
 cov4.coload("Dhil Rose");
  cov4.coload(3);
    return 0;
}
