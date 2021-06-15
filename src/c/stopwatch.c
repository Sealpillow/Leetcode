//stopwatch.c
#include <stdio.h>

int main() {

    int clicks,total=0,start,stop,time[1000]={0};
    scanf("%d",&clicks);
    for(int i=0;i<clicks;i++)
    {
        scanf("%d",&time[i]);

    }
    if(clicks%2==1)
    {
        printf("still running");
    }
    else
    {
        for(int i=0;i<clicks;i+=2)
        {
            start=time[i];

            stop=time[i+1];
            
            total=total+stop-start;
        }
        printf("%d",total);
    }
}
