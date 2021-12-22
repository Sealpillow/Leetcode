#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
input: n=7
SET 1
0 Bo        <-|
2 Jean        | first half increment of 2
4 Claude      |
6 Marybeth  <-|
5 William   <-| 5=n-2
3 Kevin       | second half decrement of 2
1 Pat       <-|

input: n=6
SET 1
0 Jim        <-| 
2 Zoe          | first half increment of 2
4 Frederick  <-|
5 Annabelle  <-| 5=n-1
3 Joey         | second half decrement of 2
1 Ben        <-|
*/
int main()
{
    int n,count=0;
    char name[16][26];
    while(1)
    {
        scanf("%d",&n);
        if(n==0) //if input n=0 stop program
        {
            break;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                scanf("%s",&name[i]);
            }
            count++;
            printf("SET %d\n",count);
            if(n%2==0) // even number
            {
                for(int i=0;i<n;i+=2)
                {
                    printf("%s\n",name[i]);
                }
                for(int i=n-1;i>0;i-=2) //n-1 largest index 2nd half
                {
                    printf("%s\n",name[i]);
                }
            }
            else //odd number
            {
                for(int i=0;i<n;i+=2)
                {
                    printf("%s\n",name[i]);
                }
                for(int i=n-2;i>0;i-=2)//n-2 largest index 2nd half
                {
                    printf("%s\n",name[i]);
                }
            }
        }
    }
}
