#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,sum,d,index;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char num[51];
        sum=0;
        scanf("%s",num);
        int len=strlen(num);
        //len=0: 0,1,2,3,4,5
        for(int x=len-1;x>=0;x-=2)// len=6, 1,3,5
        {
            sum+=num[x]-'0';
        }
        for(int x=len-2;x>=0;x-=2)//len=6, 0,2,4
        {
            d= (num[x]-'0')*2;
            if(d>9) //when digit after 2x is more than 9, get the sum of the 2 digit
            {
                sum+=d%10 + d/10;
            }
            else //if digit is less than 9 just add it to sum
            {
               sum+=d;
            }
        }

        if(sum%10==0) // if total sum is multiple of 10, it pass, else fail
        {
            printf("PASS\n");
        }
        else
        {
            printf("FAIL\n");
        }
    }
}
