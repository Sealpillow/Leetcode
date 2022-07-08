#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    double l,r;
    scanf("%lf %lf",&l,&r);
    if(sqrt(2*pow(l/2,2))<=r)
    {
        printf("fits");
    }
    else
    {
        printf("nope");
    }
}
