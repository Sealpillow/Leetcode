#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*

*/
int main()
{
    double a,n;
    scanf("%lf",&a);
    n=pow(a,1/a); //formula for infinite tetration
    printf("%lf",n);
}
