#include<stdio.h>
void main()
{
int a[50];
int i;
int s;
printf("enter the number");
scanf("%d",&s);
printf("enter n array");
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
large=small=a[0];
for(i=1;i<n;i++)
{
 if(a[i]>large)
 {
 large=a[i];
 }
 else
{
small=a[i];
}
}
}
 
