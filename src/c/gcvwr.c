#include <stdio.h>
#include <stdlib.h>
int main()
{
    int g,t,n,item,total=0;
    float limit;
    scanf("%d %d %d",&g,&t,&n);
    limit = (g-t)*0.9;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&item);
        total+= item;
    }
    printf("%.0f",limit-total);
}
