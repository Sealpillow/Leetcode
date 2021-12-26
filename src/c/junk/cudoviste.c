#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
4 4
#..#
..X.
..X.
#XX#

2x2 monster truck positions
count the number of space/car/building and check if monster truck can park on it
how many car it will crush
#. .. .#
.. .x x.

.. .x x.
.. .x x.

.. .x x.
#x xx x#
*/

int main()
{
    int r,c,car_0=0,car_1=0,car_2=0,car_3=0,car_4=0;
    char arr[51][51];
    scanf("%d %d",&r,&c);
    getchar(); //get the '\n' after getting int
    for(int i=0;i<r;i++) //row
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]=getchar();
        }
        getchar(); //get the '\n' after each row
    }
    /*for(int i=0;i<r;i++) //row
    {
        for(int j=0;j<c;j++)
        {
            putchar(arr[i][j]);
        }
        putchar('\n');
    }*/

    for(int i=0;i<r-1;i++) //row
    {
        for(int j=0;j<c-1;j++) // col
        {
            int car=0,space=0,building=0;
            for(int a=0;a<2;a++)
            {
                for(int b=0;b<2;b++)
                {
                    if(arr[i+a][j+b]=='.')
                    {
                        space++;
                    }
                    else if(arr[i+a][j+b]=='X')
                    {
                        car++;
                    }
                    else
                    {
                        building++;
                    }

                }
            }
            printf("space:%d car:%d building:%d\n",space,car,building);
            if(space==4)
            {
                car_0++;
            }
            else if(space==3&&car==1)
            {
                car_1++;
            }
            else if(space==2&&car==2)
            {
                car_2++;
            }
            else if(space==1&&car==3)
            {
                car_3++;
            }
            else if(car==4)
            {
                car_4++;
            }
            else
            {
                continue;
            }
        }

    }
    printf("%d\n",car_0);
    printf("%d\n",car_1);
    printf("%d\n",car_2);
    printf("%d\n",car_3);
    printf("%d\n",car_4);
}
