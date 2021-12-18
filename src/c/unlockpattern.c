#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
input[]
|  input[0]-[0][0],input[1]-[0][1],input[2]-[0][2]
|  input[3]-[1][0],input[4]-[1][1],input[5]-[1][2]
|  input[6]-[2][0],input[7]-[2][1],input[8]-[2][2]

*/


int main()
{
    int input[10],index=1;
    float length=0;
    for (int i=0;i<9;i+=3)
    {
        scanf("%d %d %d",&input[i],&input[i+1],&input[i+2]);
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++) // find the next
        {
            if(input[i]==input[j]-1) // find the link from 1->2....
            {
                int q1 = i/3; // so that can be in matrix
                int r1 = i%3;
                int q2 = j/3;
                int r2 = j%3;
                if(q1==q2||r1==r2) // if straight
                {
                    length += abs(q1-q2)+abs(r1-r2); // distance between 2 coordinates
                }
                else   //diagonal
                {
                    length+=sqrt(abs(q1-q2)*abs(q1-q2)+abs(r1-r2)*abs(r1-r2)); //diag= sqrt(a^2 + b^2) pythagoras theorem
                }
            }
        }
    }
    printf("%.6f",length);
}
