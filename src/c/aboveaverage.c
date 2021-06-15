//aboveaverage.c
#include <stdio.h>

int main(void)
{
    int test,ppl,avg,total[50],tempscore[1000];
    float percentage[50],abvavg=0;
    scanf("%d",&test);

    for(int i=0;i<test;i++)
    {
        scanf("%d",&ppl);
        total[i]=0;
        abvavg=0;
        for(int j=0;j<ppl;j++)
        {
            scanf("%d",&tempscore[j]);
            total[i] = total[i] +tempscore[j];
            avg= total[i]/ppl;
        }
        for(int j=0;j<ppl;j++)
        {
            if(tempscore[j]>avg)
            {
               abvavg++; 
            }
        }
        percentage[i]=(abvavg/ppl)*100;
    }
    for(int i=0;i<test;i++)
    {
        printf("%.3f%%\n",percentage[i]);
    }
    return 0;
}
