#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b==c)
    {
        printf("%d+%d=%d",a,b,c);
    }
    else if(a-b==c)
    {
        printf("%d-%d=%d",a,b,c);
    }
    else if(a*b==c)
    {
        printf("%d*%d=%d",a,b,c);
    }
    else if(a/b==c)
    {
        printf("%d/%d=%d",a,b,c);
    }
    else if(b+c==a)
    {
        printf("%d=%d+%d",a,b,c);
    }
    else if(b-c==a)
    {
        printf("%d=%d-%d",a,b,c);
    }
    else if(b*c==a)
    {
        printf("%d=%d*%d",a,b,c);
    }
    else
    {
        printf("%d=%d/%d",a,b,c);
    }


}