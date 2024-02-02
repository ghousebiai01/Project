#include <iostream>
using namespace std;


int main()
{
    int a=10 , b=20;
    cout <<"value of a      :   \t"<<a<<endl;
    cout <<"Address of a    :   \t"<< &a << endl;
    cout <<"-----------\n"  << endl;
    cout <<"value of b      :   \t" << b << endl;
    cout <<"address of B    :   \t" << &b << endl;
    cout <<"-----------\n" << endl;

    int *p=&a;
    cout <<"value of p                          :   \t" << p << endl;
    cout <<"address of p                        :   \t" << &p << endl;
    cout <<"value stored in the address of p    :   \t" << *p << endl;
    cout <<"-----------\n" << endl;

    int **q=&p;
    cout <<"value of q                                              :   \t" << q << endl;
    cout <<"address of q                                            :   \t" << &q << endl;
    cout <<"value stored in the address of q to the address of p    :   \t" << **q << endl;

    int ***r=&q;
    cout <<"value of r                                                                  :   \t" << r << endl;
    cout <<"address of r                                                                :   \t" << &r << endl;
    cout <<"value stored in the address of r to the address of q in the address of p    :   \t" << ***r << endl;

    void *s=&a;
    cout <<"value of s                                                                  :   \t" << s << endl;
    cout <<"address of s                                                                :   \t" << &s << endl;
    cout <<"value stored  in the address of s in the address of r to the address of q in the address of p    :   \t" << *(int*)s << endl;

    return 0;
}
