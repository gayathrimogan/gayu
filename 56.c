#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	int alp=0,nu=0;
	scanf("%s",n);
	int i,a;
	a=strlen(n);
	for(i=0;i<a;i++)
	{
		if(('a'<=a[i] && a[i]<='z') || ('A'<=a[i] && a[i]<='Z'))
		{
			alp=1;
		}
		if('0'<=a[i] && a[i]<='9')
		{
			nu=1;
		}
	}
	if(nu==1 && alp==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
