#include<stdio.h>
void main()
{
int n,d,sum=0;
int a[15];
printf("enter number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
sum=sum+a[i];
d=sum/4;
printf("the average number is %d",d);
}
