#include <stdio.h>
#include <stdlib.h>

struct value
{int g;
};
int main()
{
   int a=4,b=7;
   float d;
    int addition(a,b);
   int subtraction(a,b);
    int multiplication(a,b);
   int  division(a,b);
    int modulas(a,b);
   int  increment();
   int  decrement(b);
    int assign();
  int comparison(a,b);
    int and1(a);
   int or1(a);
    int negativestatment(a);
    int whilecondition(a);
    int struct value g1,g2,g3;
    g1.g=4,g2.g=5;
   g3.g=g1.g+g2.g;
    printf("the value of a and a1=%d",g3.g);



   return 0;


}
 addition(a, b)
{
   int c =a+b;
    printf("The Added value of A and B is= %d\n\n",c);

}
 subtraction( a, b)
{
  int c=a-b;
   printf("The subtracted value of A and B=%d\n",c);
}
multiplication(a,b)
{
   int c=a*b;
   printf("\nThe multiplied value of A and B=%d\n",c);
}

 division ( a, b)
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
    printf("\nThe value of increment A:%d\n", ++a);
}
 decrement(b)
{
 printf("\nThe value of decrement B:%d\n", ++b);
}

assign()
{
 int a=5;
 int b=7;

 b=a;

 printf("\nThe assigned value of a is b:%d\n",b);
  a+=5;

  a+=5;
 printf("\n The assign value of a(5) is  added with 5=%d\n",a);
 b-=4;
 printf("\n The assign value of b(7) is subtracted with 4=%d\n",b);
a=5;
  b=7;
  b*=2;

 printf("\n The assign value of b(7) is mulitplied with 2=%d\n",b);
 a=5;
  b=7; a/=5;
printf("\n The assign value of   a(5) is divided with 5=%d\n",a);
}
comparison(a,b)
{


printf("\n True(1) or False(0):\n \n a is greater than b: %d\n",a>b);

printf("\n a is lesser than b: %d\n",a<b);

a=b;


printf("\n a=5; b=5;\n\n a is equal to b: %d\n",a==b);
printf("\n a is not equal to b: %d\n",a!=b);

printf("\n a is greater than or eual to b: %d\n",a>=b);



}
and1(a)
{
  printf("\n a is greater than 3 and lesser than 7= %d\n",(a>3)&&(a<7));
}
or1(a)
{
  printf("\n a is greater than 1 and lesser than 3= %d\n" , (a>1)||(a<3));
}

negativestatment(a)
{
  printf("\n a is greater than 3 and lesser than 7= %d\n",!(a>3)&&(a<7));

}

whilecondition(int a)
{
     while(a<40)
    printf("\nthe  value of a(4) is added as a++  till a=40 :\n",a++);


}
//dowhile(a,b)
//ifelsecondition(a,b)
//nestedifcondition(b)
//for loop(a,b)
//array()



