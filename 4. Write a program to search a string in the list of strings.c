/******************************************************************************
4. Write a program to search a string in the list of strings.
*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    char a[3][20];
    char b[20];
    int i,count=0,r;
    printf("Enter the string \n");
    for(i=0;i<3 ;i++)
    {
        fgets(a[i],20,stdin);
    }
    printf("Enter the key : ");
    fgets(b,20,stdin);
    for(i=0;i<3;i++)
    {
       r= strcmp(b,a[i]);
        
    }
    if(r==0)
    printf("Yes string is present in the list of strings");
    else
    printf("No string is present in the list of strings");
    return 0;
}
