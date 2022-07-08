#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,m,r,q,l;
    scanf("%d",&n);
    scanf("%d",&m);
    q=m/n;
    r=m%n;
    //printf("%d %d\n",q,r);
    //room with no additional person 
    for(int i=0;i<n-r;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("*");
        }
        putchar('\n');
    }
    //room that has additional person 
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<q+1;j++)
        {
            printf("*");
        }
        putchar('\n');
    }
}
