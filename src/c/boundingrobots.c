#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int width,length,segments,distance,x,y,actual_x,actual_y;
    char direction;
    while(1)
    {
        x=y=actual_x=actual_y=0;
        scanf("%d %d",&width,&length);
        if(width==0 && length ==0)
        {
            break;
        }
        scanf("%d",&segments);
        for(int i=0;i<segments;i++)
        {
            getchar();
            scanf("%c %d",&direction,&distance);
            if(direction == 'u')
            {
                y+= distance;
                actual_y+=distance;
            }
            else if(direction == 'd')
            {
                y-=distance;
                actual_y-=distance;
            }
            else if(direction == 'r')
            {
                x+=distance;
                actual_x+=distance;
            }
            else // left
            {
                x-=distance;
                actual_x-=distance;
            }
            if(actual_x<0)
            {
                actual_x=0;
            }
            if(actual_x>=width-1)
            {
                actual_x= width-1;
            }
            if(actual_y<0)
            {
                actual_y=0;
            }
            if(actual_y>=length-1)
            {
                actual_y = length-1;
            }
            //printf("x:%d y:%d\n",x,y);
            //printf("actualx:%d actualy:%d\n",actual_x,actual_y);
        }
        printf("Robot thinks %d %d\n",x,y);
        printf("Actually at %d %d\n",actual_x,actual_y);
    }
}
