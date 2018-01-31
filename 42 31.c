#include<stdio.h>
void main()
{
char a[20],b[20];
int i,j,t,d;
printf("enter the string");
scanf("%s",&a[i]);
printf("enter the 2nd string");
scanf("%s\n",&b[j]);
t=strlen(a[i]);
d=strlen(b[j]);
if(t<d)
{
printf("the string is greater %s",d);
}
else if(t>d)
{
printf("the string is greater %s",t);
}
else
{
printf("the both the string is same");
}
}
