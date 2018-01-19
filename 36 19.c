#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size


int main()
{
    char str[MAX_SIZE];
    char * s = str;
    int alp, dig, ot;

    alph= dig = ot = 0;



    printf("Enter any string : ");
    gets(str);

    while(*s)
    {
        if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
            alphs++;
        else if(*s>='0' && *s<='9')
            digs++;
        else
            ots++;

        s++;
    }

    printf("Alph = %d\n", alph);
    printf("Dig= %d\n", dig);
    printf("Special characters = %d", ot);

    return 0;
