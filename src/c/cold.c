//cold.c
#include <stdio.h>

int main(void) 
{
    int num,temp,total=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&temp);
        if(temp<0)
        {
            total++;
        }
    }
    printf("%d",total);
    return 0;
}
