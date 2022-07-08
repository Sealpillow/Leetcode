#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

double caldist(double x1,double y1,double x2,double y2)
{
    double length,breadth;
    if(x1<0&& x2>0 || x1>0&& x2<0) // if both diff sign pos and neg
    {
        length = fabs(x1)+fabs(x2);
    }
    else
    {
        length = fabs(x1-x2);
    }
    if(y1<0&& y2>0 || y1>0&& y2<0) // if both diff sign pos and neg
    {
        breadth = fabs(y1)+fabs(y2);
    }
    else
    {
        breadth = fabs(y1-y2);
    }
    //printf("%lf %lf\n",length,breadth);
    return sqrt( pow(length,2) + pow(breadth,2) );
}

int main()
{
    double sk_x,sk_y,so_x,so_y,ek_x,ek_y,eo_x,eo_y,distance1,distance2;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&sk_x,&sk_y,&so_x,&so_y,&ek_x,&ek_y,&eo_x,&eo_y);
    distance1 = caldist(sk_x,sk_y,so_x,so_y);
    distance2 = caldist(ek_x,ek_y,eo_x,eo_y);
    if(distance1>distance2)
    {
        printf("%.10lf",distance1);
    }
    else
    {
        printf("%.10lf",distance2);
    }
}
