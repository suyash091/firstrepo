#include<stdio.h>
void main()
{
int a,b;
printf("enter the no.'s");
scanf("\n%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("No. after swapping %d %d",a,b);
}
