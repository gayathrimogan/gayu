#include<stdio.h>
#include<conio.h>
void main()
{
    char s[200];
    int ct = 0, j;
 
    printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (j = 0;s[j] != '\0';j++)
    {
        if (s[j] == ' ')
            ct++;    
    }
    printf("number of words in given string are: %d\n", count + 1);
}
