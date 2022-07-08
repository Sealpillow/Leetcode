#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,m,s;
    double totalm,totals,avg;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&m,&s);
        totalm+=m;
        totals+=s;
    }
    avg=(totals/60)/totalm;
    if(avg<=1)
    {
        printf("measurement error");
    }
    else
    {
       printf("%.9lf",avg); 
    }
}
