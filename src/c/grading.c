#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a,b,c,d,e,score;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    scanf("%d",&score);
    if(score>=a)
    {
        printf("A");
    }
    else if(score>=b)
    {
        printf("B");
    }
    else if(score>=c)
    {
        printf("C");
    }
    else if(score>=d)
    {
        printf("D");
    }
    else if(score>=e)
    {
        printf("E");
    }
    else
    {
        printf("F");
    }
    return 0;
}
