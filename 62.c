#include<stdio.h>
void main()
{
char s[10];
int i,flag=0;
printf("enter the string");
scanf("%s",s);
for(i=0;i<8;i++)
{
if(s[i]=='0'||s[i]=='1')
{
flag =1;
}}
if(flag==1)
{
    printf("yes it is binary representation");
}
else
{
printf("it is not a binary representation");
}
}
