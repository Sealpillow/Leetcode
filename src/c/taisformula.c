#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*

*/


int main()
{
    int n,prev_t,t;
    double prev_v,v,total_area=0;
    scanf("%d",&n);
    scanf("%d %lf",&prev_t,&prev_v); // get the first set of t and and v, set it to prev
    for(int i=0;i<n-1;i++)
    {
        scanf("%d %lf",&t,&v);//get the current t and v
        total_area += 0.5*(v+prev_v)*(t-prev_t)/1000; // formula for trapezium
        prev_v=v; //current v will be the prev v
        prev_t=t;//current t will be the prev t
    }
    printf("%.6lf\n",total_area);
}
