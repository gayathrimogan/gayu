#include<stdio.h>
void main()
{
int n,i,a=0,b=1;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d",i);
c=a+b;
a=b;
b=c;
}
printf("the result is %d",a);
}
