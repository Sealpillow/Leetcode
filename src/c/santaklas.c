#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define pi 3.141592653589793238

int main()
{
    double alt,deg;
    scanf("%lf %lf",&alt,&deg);
    if(deg<=180) // straight or abv sky 0 to 180
    {
        printf("safe");
    }
    else if(deg>180 && deg<270) // 181 to 269
    {
        printf("%.0lf",floor(alt/sin((deg-180)*pi/180)));
    }
    else // 270 to 359
    {
       printf("%.0lf",floor(alt/sin(abs(360-deg)*pi/180)));
    }
}
