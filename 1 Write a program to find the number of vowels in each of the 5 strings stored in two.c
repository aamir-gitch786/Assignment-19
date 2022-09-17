/******************************************************************************
1 Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays taken from the user.
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
    for(i=0 ; i<5 ; i++)
    { count=0;
      for(j = 0 ;a[i][j] ; j++)
      {
          if(a[i][j]=='A' || a[i][j]=='a' || a[i][j]=='E' || a[i][j]=='e' || a[i][j]=='I'||a[i][j]=='i'||a[i][j]=='O'||a[i][j]=='o'||a[i][j]=='U'||a[i][j]=='u')
          count++;
      }
      printf("Total number of vowels present in %d string is : %d \n",i+1,count);
    }
    

    return 0;
}

