/******************************************************************************

2. Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
   char a[10][20],tem[50];
   int i,j,Round,r;
   printf("Enter 10 city names : \n");
   for(i=0;i<=9;i++)
   fgets(a[i],20,stdin);
   
   for(Round=1;Round <= 10 ;Round++)
   {
       for(i=0;i<10-Round ;i++)
       {
          r=strcmp(a[i],a[i+1]);
          if(r>0)
          {
            strcpy(tem , a[i]);
            strcpy(a[i] , a[i+1]);
            strcpy(a[i+1], tem);
            
          }
       }
   }
   printf("After sorting these city names \n");
   for(i=0;i<10;i++)
   {
       printf(" %s", a[i]);
   }

    return 0;
}
