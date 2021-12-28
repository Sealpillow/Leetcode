#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
1
1 3 98765
num:98765 muliplier:98765,pow(base,power):1 ,power:0
num:98765 muliplier:32921,pow(base,power):3 ,power:1
num:98765 muliplier:10973,pow(base,power):9 ,power:2
num:98765 muliplier:3657,pow(base,power):27 ,power:3
num:98765 muliplier:1219,pow(base,power):81 ,power:4
num:98765 muliplier:406,pow(base,power):243 ,power:5
num:98765 muliplier:135,pow(base,power):729 ,power:6
num:98765 muliplier:45,pow(base,power):2187 ,power:7
num:98765 muliplier:15,pow(base,power):6561 ,power:8
num:98765 muliplier:5,pow(base,power):19683 ,power:9
num:98765 muliplier:1,pow(base,power):59049 ,power:10
num:98765 muliplier:0,pow(base,power):177147 ,power:11
return 1 num:39716
num:39716 muliplier:0,pow(base,power):59049 ,power:10
return 4 num:350
num:350 muliplier:0,pow(base,power):19683 ,power:9
return 0 num:350
num:350 muliplier:0,pow(base,power):6561 ,power:8
return 0 num:350
num:350 muliplier:0,pow(base,power):2187 ,power:7
return 0 num:350
num:350 muliplier:0,pow(base,power):729 ,power:6
return 1 num:107
num:107 muliplier:0,pow(base,power):243 ,power:5
return 1 num:26
num:26 muliplier:0,pow(base,power):81 ,power:4
return 0 num:26
num:26 muliplier:0,pow(base,power):27 ,power:3
return 4 num:8
num:8 muliplier:0,pow(base,power):9 ,power:2
return 4 num:2
num:2 muliplier:0,pow(base,power):3 ,power:1
return 4 num:0
num:0 muliplier:0,pow(base,power):1 ,power:0
1 19
*/
int power,sum;

int func(int base,int num)
{
    int multiplier = num/(int)pow(base,power);
    //e.g 98765/3^9= 5, 98765/3^10=1, 98765/3^11=0 therefore largest possible is 10
    // when multiplier is 0
    if(multiplier==0)
    {
        power--; // get the previous power e.g:10
        if(power<0)
        {
            // when it reach the end where num:0 muliplier:0,pow(base,power):1 ,power:0,
            // hence after power-- it will be -1 which will serve as the base, m*m+m*m...+0(base)
            return 0;
        }
        else
        {
            int m = num/(int)pow(base,power);//get the multiplier before it becomes 0
            num-= m*(int)pow(base,power);// get the remainder after minus of muliplier
            //return the value of square of the digit 'a'=m*m
            //continue the recursion of sum
            return m*m+func(base,num); 
        }
    }
    
    else //to find the largest power
    {
        power++;
        return func(base,num);
    }
}

int main()
{
    int p,k,b,n;
    scanf("%d",&p);
    for(int i=0;i<p;i++)
    {
        power=0,sum=0;
        scanf("%d %d %d",&k,&b,&n);
        printf("%d %d\n",k,func(b,n));
    }
}
