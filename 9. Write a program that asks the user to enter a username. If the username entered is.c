/******************************************************************************
9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed
*******************************************************************************/

#include <stdio.h>
#include<string.h>
int fact(int);

int main()
{
   char a[3][20]={"shekhaamir","yuvrajsingh","asifali"};
   char b[20];
   int len,r,i,n;
   printf("Enter username : \n");
   fgets(b,20,stdin);
   len=strlen(b);
   b[len-1]='\0'; //because fgets '\n' includes as a single character.
   
   
    for( i=0;i<3;i++)
  {   
    r=strcmp(b,a[i]);
    if(r==0)
    { printf("Enter the number ");
      scanf("%d",&n);
      printf("Factorial of %d is %d ",n,fact(n));
    break;}
  }
  if(i==3)
  printf("Not allowed");
}
int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
   
}

 
