#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,sum,d,index;
    long long num; //long number of inputs
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        index =0;
        sum=0;
        scanf("%lld",&num);
        while(num!=0)
        {
            d=num%10;
            num=num/10;
            printf("num: %lld\n",num);
            if(index%2!=0) //if index is odd
            {
                d*=2;
                printf("index:%d d:%d\n",index,d);
                if(d>9) //when digit after 2x is more than 9, get the sum of the 2 digit
                {
                    sum+=d%10 + d/10;
                }
                else //if digit is less than 9 just add it to sum
                {
                   sum+=d;
                }
            }
            else //if index is odd
            {
                sum+=d;
            }
            printf("%d\n",sum);
            index++;
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
