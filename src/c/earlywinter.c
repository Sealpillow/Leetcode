#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,d,data,found=0,count=0,min=101;
    scanf("%d %d",&n,&d);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&data);
        if(data<=d)
        {
            found = 1;
            printf("It hadn't snowed this early in %d years!",count);
            break;
        }
        else
        {
            count++;
        }

    }
    if(!found)
        printf("It had never snowed this early!");


}
