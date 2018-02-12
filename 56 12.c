#include<stdio.h>
void main()
{
int n,i,t;
printf("enter the number");
scanf("%d",&n);
printf("enter the sec number");
scanf("%d",&i);
t=n;
n=i;
i=t;
printf(swapping of two number %d%d",n,i);
}
