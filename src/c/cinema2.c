#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*

*/

int main()
{
    int seats,num,groups,total=0,count=0;
    scanf("%d %d",&seats,&groups);
    for(int i=0;i<groups;i++)
    {
        scanf("%d",&num);
        total+=num;
        if(total>seats)
        {
            count++;
        }
    }
    printf("%d",count);
}
