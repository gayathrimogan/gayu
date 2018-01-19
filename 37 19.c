#include<stdio.h>
void main()
{
    int i,n,s;
    printf("enter the value");
    scanf("%d",&n);
    printf ("enter the value of secound");
    scanf("%d",&i);
     s=n;
     n=i;
     i=s; 
     printf("the swap no is %d",n);
     printf("the value of swap no is %d",i);
     }
