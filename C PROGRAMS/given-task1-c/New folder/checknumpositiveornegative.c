#include<stdio.h>
int main()

{
    
     positiveornegative();
    even();
return 0;
}

int positiveornegative()
  {  
    int a;
     printf("Enter the Value\n");
scanf("%d",&a);
if(a>0)
{printf("The entered Number is a positive number(+)\n");
}
else 
{
printf("The entered Number is Negative Number(-)\n");}
  }
  int even()
{
    int a;

     printf("Enter the Value\n");
     scanf("%d",&a);
     if(a % 2 == 0)
   {
     printf("The entered number is even\n");
   }
  else
  {
    printf("The entered number is odd");
    }}