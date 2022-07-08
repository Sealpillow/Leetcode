#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,k,x,count=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        count++;
        if(count%k==0)
        {
            printf("%d ",x);
        }
    }
}
