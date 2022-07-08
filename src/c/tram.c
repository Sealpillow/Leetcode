#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    double a,x,y;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf %lf",&x,&y);
        a+=(y-x); // y= x-a *given
    }
    printf("%lf",a/n);
}
