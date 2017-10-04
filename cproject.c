#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the no.'s");
scanf("\n%d%d",&a,&b);
c=a+b;
a=c-a;
b=c-b;
printf("No. after swapping %d %d",a,b);
}
