#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,sum=0,d,index=0;
    long long num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&num);
        while(num!=0)
        {
            d=num%10;
            num=num/10;
            printf("num: %lld\n",num);
            if(index%2!=0)
            {
                printf("index:%d d:%d\n",index,d);
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
