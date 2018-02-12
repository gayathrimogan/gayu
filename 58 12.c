#include <stdio.h>
void main()
{
	int i,j,k;
	printf ("enter the num");
	scanf("%d %d",&i,&j);
	i=i^j;
	j=j^i;
	i=i^j;
	printf("%d %d",i,j);
}
