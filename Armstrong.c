#include <stdio.h>
int main()
{
int a,b,c=0,t;
printf("\n enter the no.");
scanf("%d", &a);
t=a;
while(a>0)
{
  b=a%10;
  c=c+(b*b*b);
  a=a/10;
}
if(t==c)
{
  printf("\n the no is an armstrong no. ");
}
else 
{
  printf("\n the no. is not an armstrong no. ");
}
}
