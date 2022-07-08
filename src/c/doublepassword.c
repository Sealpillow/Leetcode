#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int count=0;
    char p1[5],p2[5];
    scanf("%s",p1);
    scanf("%s",p2);
    for(int i=0;i<4;i++)
    {
        if(p1[i]!=p2[i])
        {
            count++;
        }
    }
    printf("%.0lf",pow(2,count));

}
