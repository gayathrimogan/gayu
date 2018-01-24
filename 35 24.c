#include<stdio.h>
#include<conio.h>
int main()
{
 int ct_words=0,i;
 int ct_char=0;
 char str[20];
 printf("Enter string : ");
 gets(str);
 for(i=0; str[i]!=NULL; i++)
 {
   ct_char++;
   if(str[i]==' ')
      ct_words++;
 }
 printf("Number of characters in string : %d",ct_char);
 printf("Number of words in string : % d",ct_words+1); 
 getch();
 return 0;
}
