#include<stdio.h> 
int hcf(int x,int y); 
void main() 
{ 
    int i,j,e; 
    clrscr(); 
    printf("Enter 2 Num : "); 
    scanf("%d%d",&i,&j); 
    if(i>j) 
      { 
           e=hcf(i,j); 
      } 
    else 
     { 
           e= hcf(i,j); 
     } 
           printf("HCF is= %d",e); 
           getch(); 
} 
    int hcf(int a,int b) 
    { 
       int r=1; 
       while(r!=0) 
          { 
               r=a%b; 
               a=b; 
               b=r; 
          } 
               return(a); 
    }  
