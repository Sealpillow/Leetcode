#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int limit,n,people,total=0,count=0;
    char status[6];
    scanf("%d %d",&limit,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %d",status,&people);
        if(strcmp(status,"enter")==0) // same
        {
            total+=people;
            if(total>limit) //not allowed to enter
            {
                total-=people;
                count++;
            }
        }
        else
        {
            total-=people;
        }
    }
    printf("%d",count);
}
