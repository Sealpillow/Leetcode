//speedlimit.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=1,speed[10],time[10],distance[10],s,t,x=0;
    while(n!=-1)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&s,&t);
            speed[i]=s;
            time[i]=t;
            if(i==0)
            {
                distance[x]=speed[0]*time[0];  
            }
            else
            {
                distance[x]=distance[x]+(speed[i]*(time[i]-time[i-1]));
            }
        }
        x++;
    }
    for(int i=0;i<x-1;i++)
    {
        printf("%d miles\n",distance[i]); 
    }
    return 0;
}
