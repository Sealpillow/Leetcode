#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x1,y1,x2,y2,length,breadth;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
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
    printf("%.3lf",length*breadth);
}
