#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,m,*arr,a,b;
    scanf("%d %d",&n,&m);
    arr = malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        arr[i]= -(i+1);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        arr[a-1]++;
        arr[b-1]++;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
