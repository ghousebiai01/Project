#include <iostream>

using namespace std;
class dhillu{
public:

    int df()
         {
             cout <<"Hi I am Ghouse Bi.";
        } };
         class dhillu2
         {
              public:
              void dhi2()
              {cout<< "Hi I am studying AI course";
              }

         };
        class dhillu3
        {
       public:
        void dhi3()
           {

           cout <<"Hi I am Dhillu";}
        };
       class dhillu4
       {
        public:
       void dhi4()
       {cout <<  "Hi I am studying in Trichy";
       }};
       class dhillu5 : public dhillu, public dhillu2, public dhillu3, public dhillu4{};

int main()
{
    dhillu5 dhi;
    return 0;
}
