#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double n,x,y,a;
    scanf("%lf %lf %lf",&n,&x,&y);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a);
        printf("%.0lf\n",y/x*a);
    }
}
