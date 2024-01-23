#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=4,b=7;
   float d;
    addition(a,b);
    subtraction(a,b);
    multiplication(a,b);
    division(a,b);
    modulas(a,b);
    increment();
    decrement(b);
   assign(a);
  comparison(a,b);
    and1(a);
    or1(a);
    negativestatment(a);
    whilecondition(a);
    dowhile(a);
    forprogram(a);
    switchprogram(a);


   return 0;


}
 addition(int a,int b)
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
     while(a<10)
    printf("\nthe  value of a(4) is added as a++  till a=10 :%d\n",a+=2);
a++;

}
dowhile(a)

{


    do

    {
    printf("\n The  decreased value of a :%d\n",a);
    a--;
    }
    while(a>0);
}

forprogram(int a)
{
    for(a;a<10;a++)
    {

    printf("\n The  increased value of a :%d",a);
    }
}
int switchprogram(int a)
{
    printf("\n\n The Switch value of a is:%d",a);
   switch(a)

{
    case 1:
        printf("this is statement no: 1");
        break;
    case 2:
        printf("this is statement no: 2");
        break;

    case 3:
        printf("this is statement no: 3");
        break;
    case 4:
        printf("this is statement no: 4");
        break;
}}
//printf("")

//ifelsecondition(a,b)
//nestedifcondition(b)
//for loop(a,b)
//array()
//struct()
//
#include <stdio.h>
#include <stdlib.h>

struct value
{int g;
};
int main()
{
   int a=4,b=7;
   float d;
    addition(a,b);
    subtraction(a,b);
    multiplication(a,b);
    division(a,b);
    modulas(a,b);
    increment();
    decrement(b);
   assign();
  comparison(a,b);
    and1(a);
    or1(a);
    negativestatment(a);
    whilecondition(a);
    struct value g1,g2,g3;
    g1.g=4,g2.g=5;
   g3.g=g1.g+g2.g;
    printf("the value of a and a1=%d",g3.g);



   return 0;


}
 addition(int a,int b)
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



