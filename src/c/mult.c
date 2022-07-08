#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,num,first,mult = 1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(mult==1)
        {
            first = num;
            mult = 0;
            continue; // skip the rest of the code
        }
        if(num%first==0)
        {
            //printf("Multi!:");
            printf("%d\n",num);
            mult = 1;
        }
    }
}
