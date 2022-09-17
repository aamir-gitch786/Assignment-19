/******************************************************************************
5. Suppose we have a list of email addresses, check whether all email addresses have
 in it. Print the odd email out.
*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
   char a[3][30];
   int i,j,count;
   printf("Enter email addresses : \n");
   for(i=0;i<3;i++)
   fgets(a[i],30,stdin);
   printf("Odd email are : \n");
   for(i=0;a[i];i++)
   {count=0;
       for(j=0;a[i][j] ;j++)
       {
           if(a[i][j]=='@')
           count=1;
       }
       if(count==0)
       printf("%s",a[i]);
   }
    return 0;
}
