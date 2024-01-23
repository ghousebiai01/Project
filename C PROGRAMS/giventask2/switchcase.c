#include<stdio.h>

int main()
{
    int a,c,d,e,f,g;

 char oper;





printf("please enter how many values are to be operated\n\n");
scanf("%d",&a);
if (a==2)
{


printf("enter the first value\n");
scanf("%d",&c);
printf("enter the second value\n");
scanf("%d",&d);
printf("Enter any operator(+),(-),(*),(/)\n");
scanf(" %c",&oper);

switch(oper)
{
 case '+':
 printf("\n The addition of two values=%d",c+d);
 break;

 case '-':
 printf("\n The subtraction of two values=%d ",c-d);
 break;

 case '*':
 printf("\n The multiplication of two values=%d ",c*d);
 break;

 case '/':
 printf("\n The division of two values=%d",c/d);
 break;

 default:
 printf("You have entered unsupported operator\n");
}}
else
{printf("enter the first value\n");
scanf("%d",&e);
printf("enter the second value\n");
scanf("%d",&f);
printf("enter the third value\n");
scanf("%d",&g);
printf("Enter any operator(+),(-),(*),(/)\n");
scanf(" %c",&oper);
switch(oper)
{
 case '+':

 printf("\n The addition of three values=%d",e+f+g);
 break;
 case '-':
 printf("\n The subtraction of three values=%d ",e-f-g);
 break;
 case'*':
 printf("\n The multiplication of three values= %d",e*f*g);
 break;
 case'/':
 printf("\n The division of three values= %d",e/f/g);
 break;
 default:
 printf("You have entered unsupported operator");
}}
return 0;
}
