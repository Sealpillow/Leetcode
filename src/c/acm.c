//acm.c
#include <stdio.h>
int main() 
{
    int time=0,correct=0,total=0,prob[26]={0};
    char status[6],check,alpha;
    // Every alphabet represented by prob[i], prob[0] will count how many error if A wrong, etc
    while(time!=-1)
    {
        scanf("%d",&time);
        if(time>0)
        {
            scanf(" %c %s",&alpha,status);
            check=status[0];
            if(check=='r')
            {
                
                total=total+time+prob[alpha-65]*20;
                correct++;
            }
           else
            {
                prob[alpha-65]++;
            }
        }
    }
    printf("%d %d\n",correct,total);
    return 0;
}
