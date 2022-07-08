#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// this question is to find the a number that multiplies 
// with the input digit that has a sum of that digit
// e.g input 42 the sum is 6 hence we need to find the smallest number(x) that is 
// above 10 that multiples 42 (input * x) which has a sum of 6
int totalsum(int num)
{
    int total =0;
    while(num!=0)
    {
        total+=num%10;
        num=num/10;
        //printf("%d %d\n",total,num);
    }
    return total;
}
int main()
{
    int num,p,m,sum;
    while(1)
    {
        scanf("%d",&m);
        if(m==0)
        {
            break;
        }
        sum = totalsum(m);
        p=11;
        while(1)
        {
            num=m*p;
            if(totalsum(num)==sum)
            {
                printf("%d\n",p);
                break;
            }
            p++;
        }
    }
}
