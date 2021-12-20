#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int k,n,t,check=0,total=0,last=0,add=0,x=0,count=0;
    char ans;
    scanf("%d",&k);//person number
    scanf("%d",&n);//number of question
    for(int i=0;i<n;i++)
    {
        scanf("%d %c",&t,&ans);
        total+=t; // every input, time is added to the total
        //3mins 30 sec =  210s
        if(ans=='T'&&total<210)// if the answer is correct and the current total does not exceed
        {
            k+=1; // number increase by 1
            if(k>8)//if exceed 8, goes back to k=1
            {
                k=1;
            }
        }
         // at ans == 'N' and ans == 'P' does not increase number,
    }
    printf("%d",k);
}
