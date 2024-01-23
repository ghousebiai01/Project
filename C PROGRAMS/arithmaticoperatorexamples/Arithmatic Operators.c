#include <stdio.h>

int addition(int a,int b);
    int subtraction(int a,int b);
   int multiplication(a,b);
   int division(a,b);
   int modulas(a,b);
   int increment(a);
   int intdecrement(b);
   int assign();
  int comparison(a,b);
   int and1( a);
    int or1( a);
    int negativestatment( a);
    //int struct;

struct value
{int g;
};
int main()
{
   int a=4,b=7;
   float d;
   printf("\n\n\t\t***Arithmatic Examples in C lang***\n\n \t Given Inputs: A=4,B=7\n\n");
    addition(a,b);
    subtraction(a,b);
    multiplication(a,b);
    division(a,b);
    modulas(a,b);
    increment(a);
    decrement(b);
   assign();
  comparison(a,b);
    and1(a);
    or1(a);
    negativestatment(a);
    struct value g1,g2,g3;
    g1.g=4,g2.g=5;
   g3.g=g1.g+g2.g;
    printf("\n\n The value of a and a1=%d\n",g3.g);



   return 0;


}
  int addition(int a,int b)
{
   int c =a+b;
    printf("The Added value of A and B is= %d\n\n",c);

}
 subtraction(int a,int b)
{
  int c=a-b;
   printf("The subtracted value of A and B=%d\n",c);
}
multiplication(a,b)
{
   int c=a*b;
   printf("\nThe multiplied value of A and B=%d\n",c);
}

 division (int a,int b)
{
float d=(float)a/b;
printf("\nThe divided value of A and B=%f\n",d);
}
 modulas(a,b)
{
   int c=a%b;
   printf("\nThe modulus value of A and B=%d\n",c);
}
 increment(a)
{
a++;
    printf("\nThe value of increment A:%d\n", a++);

}
 decrement(b)
{
 printf("\nThe value of decrement B:%d\n", --b);
}

assign()
{
printf("\n The value of a(4) is  assigned to be added with 5 upto 30\n");
 int a=4;
 int b=7;



  while(a<=30)
  {

  printf("\n%d\n",a);
  a+=5;
  }
 printf("\n The  value of b is(7) assigned to be subtracted with 2 upto 1");

 while(b>=0)
 {
 printf("\n%d\n",b);
 b-=2;
 }
}

comparison(a,b)
{


printf("\n True(1) or False(0):\n \n a(4) is greater than b(7): %d\n",a>b);

printf("\n a(4) is lesser than b(7): %d\n\n",a<b);

a=b;


printf("\n if a=5; b=5;\n\n a is equal to b: %d\n",a==b);
printf("\n a is not equal to b: %d\n",a!=b);

printf("\n a is greater than or equal to b: %d\n",a>=b);



}
and1(a)
{
  printf("\n a(4) is greater than 3 and lesser than 7= %d\n",(a>3)&&(a<7));
}
or1(a)
{
  printf("\n a(4) is greater than 1 and lesser than 3= %d\n" , (a>1)||(a<3));
}

negativestatment(a)
{
  printf("\n(negative statment) a(4) is greater than 3 and lesser than 7= %d\n",!(a>3)&&(a<7));

}
