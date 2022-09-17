/******************************************************************************
7. From the list of IP addresses, check whether all ip addresses are valid.
*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[5][20];
    int i,j,k,count,sum;
    printf("Enter IP addresses : \n");
    for(i=0;i<5;i++)
    fgets(a[i],20,stdin);
    for(i=0;i<5;i++)
    {
        count=0,j=0;
        while(a[i][j]!='\n')
        {sum=0;
            for(k=j;a[i][k]!='.';k++)
            {
                if(a[i][k]=='\n')
                break;
                sum=sum*10+(a[i][j]-48);
                j++;
            }
             if(sum<=255 && sum>=0)
            count++;
            if(a[i][j]=='\n')
            break;
            else
            j++;
           
        }
       
        if(count==4)
        printf("valied %s",a[i]);
    }
    return 0;
}
