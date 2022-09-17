/******************************************************************************
3. Write a program to read and display a 2D array of strings in C language.
*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[5][10];
    int i , j , count;
    printf("Enter the string :  \n");
    for(i = 0 ; i <=4 ; i++)
    { printf("%d ",i+1);
        fgets(a[i],10,stdin);
    }
    printf("You have entered : \n");
    for(i=0 ; i<5 ; i++)
    { 
      printf(" %s ",a[i]);
    }
    

    return 0;
}


