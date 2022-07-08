#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,num,prev,*arr,count=1;
    scanf("%d",&n);
    arr = malloc(sizeof(int)*n);
    scanf("%d",&arr[0]);
    for(int i=1;i<n;i++)
    {
        scanf("%d",&num);
        if(num>arr[count-1])
        {
            arr[count] = num;
            count ++;
        }
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++)
    {
        printf("%d ",arr[i]);
    }
}
