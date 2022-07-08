#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int num,paul,opp,total;
    scanf("%d %d %d",&num,&paul,&opp);
    total=paul+opp;
    if(total/num%2==0)// if is even
    {
        printf("paul");
    }
    else
    {
        printf("opponent");
    }
}
