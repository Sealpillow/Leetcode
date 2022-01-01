#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*

*/

int main()
{
    double r,m,c,pi=3.141592654,box_area,true_area,est_area;
    while(1)
    {
        scanf("%lf %lf %lf",&r,&m,&c);
        if(r==0&&m==0&&c==0)
        {
            break;
        }
        else
        {
            box_area=(r*2)*(r*2); // as radius is half of the length of the box, 2*r give the length
            true_area=pi*r*r;
            est_area= c/m*box_area; //is the ratio of c/m of the box area
        }
        printf("%.9lf %.9lf\n",true_area,est_area);
    }
}
