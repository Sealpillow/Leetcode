#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,sum,d,index;
    long long num;
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
            if(index%2!=0)
            {
                d*=2;
                printf("index:%d d:%d\n",index,d);
                if(d>9)
                {
                    sum+=d%10 + d/10;
                }
                else
                {
                   sum+=d;
                }
            }
            else
            {
                sum+=d;
            }
            printf("%d\n",sum);
            index++;
        }
        if(sum*2%10==0)
        {
            printf("PASS\n");
        }
        else
        {
            printf("FAIL\n");
        }
    }
}
