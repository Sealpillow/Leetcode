#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// by using differentiation, dt/dt = -2ar +b
// at max dt/dr=0 -> 0=-2ar+b -> r = b/2a for max rpm for curve
int main()
{
    int n,best,gear;
    float r,a,b,c,max,t;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&gear);
        best=1,max=0;
        for(int j=1;j<=gear;j++)
        {
            scanf("%f %f %f",&a,&b,&c);
            r = b/(2*a);
            t=-a*r*r+b*r+c;
            if(t>max)
            {
                best=j;
                max=t;
            }
            //printf("r:%f t: %f\n",r,t);
        }
        printf("%d\n",best);
    }
}
