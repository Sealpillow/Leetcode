#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    int n,count=0,addi=0,score;
    double avg,cur_avg,total=0,total_score=0;
    scanf("%d %lf",&n,&avg);
    if(avg==100) //getting 100 avg is impossible as every score has to be 100 which is not possible as inputs
    {
        printf("impossible");
        return 0;
    }
    for(int i=0;i<n;i++) // get total score
    {
        scanf("%d",&score);
        total+=score;
    }
    cur_avg = total/n;
    //printf("start:%lf\n",cur_avg);

    while(1) // check for number of 100's scores to be added
    {
        total_score= total+100*count;
        cur_avg = total_score/(n+count);
        //printf("%lf\n",cur_avg);
        if(cur_avg>avg) // if exceed avg
        {
            total_score-=100; // remove the excess 100 and check if next number is within the 1-99
            break;
        }
        if(cur_avg==avg) 
        {
            break;
        }
        count++;
    }
    //printf("num of 100's:%d\n",count);
    total = total_score;
    while(1) // check if next number is within the 1-99
    {
        total_score = total+addi;
        cur_avg = total_score/(n+count);
        //printf("%d %lf\n",addi,cur_avg);
        if(cur_avg == avg) // reach target avg
        {
            //printf("END\n");
            printf("%d",count);
            break;
        }
        if(addi==100)// if it reach the max means cant get target avg
        {
            printf("impossible");
            break;
        }
        addi++;
    }
}
