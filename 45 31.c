#include<stdio.h>
void main()
{
int n;
int count=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
n=n%10;
count++;
}
printf("the total entered number %d",count);
}
