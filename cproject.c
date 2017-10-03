#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the no.'s");
scanf("\n%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("No. after swapping %d %d",a,b);
}
