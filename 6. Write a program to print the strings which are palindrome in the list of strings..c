/******************************************************************************
6. Write a program to print the strings which are palindrome in the list of strings.
*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
   char a[3][10];
   int i,k,n,j;
   printf("Enter the strings : \n");
   for(i=0;i<3;i++)
   fgets(a[i],10,stdin);
   
   
   printf("Palindrome strings are : \n");
  for(i=0;i<3;i++)
  {
    n=strlen(a[i])-2;
   k=(n%2==0)?n/2:(n+1)/2;
   for(j=0;j<k;j++)
   {
       if(a[i][j]!=a[i][n-j])
       break;
      
   }
   if(j==k)
   printf("%s ",a[i]);
   
   
    
  }

    return 0;
}
