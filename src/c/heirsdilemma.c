//heirsdilemma.c
#include <stdio.h>
#include <stdbool.h>

int main() {

    int L,H,combi=0;
    scanf("%d %d",&L,&H);
    for(int c=L;c<H;c++)
    {
        int x,num=c,numlist[10]={0},divisible=0;
        bool copy=false;

        for(int i=0;i<6;i++)//get all alphabet in array
        {
            x = num%10;
            if(x==0)    //ensure non-zero
            {
                break;
            }
            numlist[x]++;
            num=num/10;
            if(c%x==0)
            {
                divisible++;
            }
        }

        for(int j=1;j<10;j++)// check if there is copy
        {
            if(numlist[j]>1)
            {
                copy=true;
            }
        }
        if(copy==false && divisible==6) // ensure both condition met
        {
            combi++; 
        }
    }
    printf("%d\n",combi);

    return 0;
}
