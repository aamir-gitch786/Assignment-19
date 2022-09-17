/******************************************************************************
10. Create an authentication system. It should be menu driven.
*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
  char user[20],ch;
  char password[10];
  printf("Enter your user id : ");
  fgets(user,20,stdin);
  
  printf("Enter the   password(any 8 characters) :\n");
  for(int i=0;i<8;i++)
  {   ch=getchar();
      
      password[i]=ch;
      
  }
  
  printf("\nYour password is %s",password);
    return 0;
}
