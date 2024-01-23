#include<stdio.h>
int main()

{
    int a;
     printf("Enter the Value\n");
scanf("%d",&a);
if(a>0)
{printf("The entered Number is a positive number(+)\n");
}
else if (a==0) 
{printf("0 is neither positive nor negative\n");}
else
{
printf("The entered Number is Negative Number(-)\n");}
return 0;
}
