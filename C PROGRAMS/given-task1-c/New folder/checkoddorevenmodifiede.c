#include<stdio.h>

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
    }
   return 0;
}
