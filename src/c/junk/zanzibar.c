#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
if the number of turtles in a year is more than twice as big as the year before,
the difference must be fully explained by import.
if(input>base*2)
->count+= (input-base*2);
else
means that the turtle on the island gave birth
input shld be input==base or input== base*2
base = input;

3
1 100 0
input:100 base:1
98 98
98
1 1 1 2 2 4 8 8 9 0
input:1 base:1
input:1 base:1
input:2 base:1
input:2 base:2
input:4 base:2
input:8 base:4
input:8 base:8
input:9 base:8
0
1 28 72 0
input:28 base:1
26 26
input:72 base:28
42 16
42

*/
int main()
{
    int n,input,base;
    scanf("%d",&n);
    for(int i=0;i<n;i++) //row
    {
        int count=0;
        scanf("%d",&base);
        while(1)
        {
            scanf("%d",&input);
            if(input==0)
            {
                break;
            }
            else
            {
                printf("input:%d base:%d\n",input,base);
                if(input>base*2)
                {
                    count+= (input-base*2);
                    printf("%d %d\n",count,input-base*2);
                }
                base = input;
            }
        }
        printf("%d\n",count);
    }
}
