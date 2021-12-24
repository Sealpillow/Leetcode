#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,b,w,n,d;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)
        {
            break;
        }
        else
        {
            w= a/b; // whole number(quotient)
            n = a%b; // numerator(remainder)
            d=b; //divisor
            printf("%d %d / %d\n",w,n,d);
        }
    }
}
