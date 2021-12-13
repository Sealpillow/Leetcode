#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int s,t,n;
    int walk[1000],bus[1000],wait[1000];
    int total=0;
    int multiples;
    scanf("%d %d %d",&s,&t,&n);
    for(int i=0;i<n+1;i++)
    {
        scanf("%d",&walk[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bus[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&wait[i]);
    }

    for(int i=0;i<n;i++)
    {
        total += walk[i];
        if(fmod(total,wait[i])!=0)
        {
            printf("total:%d wait: %d\n",total,wait[i]);
            multiples = ceil((float)total/wait[i]);
            printf("m:%d\n",multiples);
            total += abs(total-wait[i]*multiples);
            printf("total:%d\n",total);
        }
        total+= bus[i];
        printf("loop total:%d\n",total);
    }
    total += walk[n];
    printf("final:%d",total);
    return 0;
}
