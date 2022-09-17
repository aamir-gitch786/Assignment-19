/******************************************************************************

8. Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
word1 = “the”, word2 = “fox”, OUTPUT : 1 )
*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
  char a[5][20]={"the","quick","brown","fox","quick"};
  char word1[10];
  char word2[10];
  char indicater[5];
  int len1,len2,i,start,r1,r2,end,count1=0,count2=0,starting,ending;
  printf("Enter the first word \n");
  fgets(word1,10,stdin);
  len1=strlen(word1);
  word1[len1-1]='\0';
 
  printf("Enter the Seconde word \n");
  fgets(word2,10,stdin);
  len2=strlen(word2);
  word2[len2-1]='\0';

for(i=0;i<5;i++)
{
    r1=strcmp(word1,a[i]);
    if(r1==0)
    {
        start=i;
    }
    r2=strcmp(word2,a[i]);
    if(r2==0)
    {
        end=i;
    }
    
}
if(start>end)
{
 starting=end;
 ending=start;
}
else
{
    starting=start;
    ending=end;
}

for(i=starting+1;i<ending;i++)
{
    count1++;
}
for(i=ending+1;i<5;i++)
{
    count2++;
}
for(i=0;i<starting;i++)
{
    count2++;
}


if(count1<count2)
printf("minimum distance is %d ",count1);
else
printf("minimum distance is %d ",count2);
    return 0;
}
