#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    char c[4][4],time[4];
    scanf("%s",time);
    for(int i=0;i<4;i++)
    {
        time[i]=time[i]-48;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            //printf("%d %f\n",time[i],pow(2,3-j));
            if(time[i]>=pow(2,3-j))
            {
               c[j][i]= '*';
               time[i]=time[i]-pow(2,3-j);
            }
            else
            {
               c[j][i]= '.';
            }
        }

    }

    for(int i=0;i<4;i++)
    {
        printf("%c %c   %c %c\n",c[i][0],c[i][1],c[i][2],c[i][3]);
    }
}
