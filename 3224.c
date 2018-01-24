#include <stdio.h>

#define MAX_SIZE 100 

int main()
{
    char str[MAX_SIZE];
    char previChar;
    int n, words;
    printf("Enter any string: ");
    gets(str);
    n = 0;
    words = 0;
    previChar = '\0'; 
    while(1)
    {
        if(str[n]==' ' || str[n]=='\n' || str[n]=='\t' || str[n]=='\0')
        {
          
            if(previChar != ' ' && previChar != '\n' && previChar != '\t' && previChar != '\0')
            {
                words++;
            }
        }


        previChar = str[i];

        if(str[n] == '\0')
             break;
        else
             i++;
    }

    printf("Total number of words = %d", words);

    return 0;
