#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int check(int n)
{
    int o,t;
    o = n%10;
    n/=10;
    t = n%10;
    //printf("o:%d t:%d\n",o,t);
    if(o==9 && t==9)
    {
        //printf("num is %d\n",n);
        return 1;
    }
    return 0;
}
int main()
{
    int num,firstnum,secondnum;
    scanf("%d",&num);
    if(num<100)
    {
        printf("99");
        return 0;
    }
    for(int i=num;i>0;i--)
    {
        //printf("%d\n",i);
        if(check(i))
        {
            firstnum = i;
            break;
        }
    }
    for(int i=num;i<(num+100);i++)
    {
        //printf("%d\n",i);
        if(check(i))
        {

            secondnum = i;
            break;
        }
    }
    //printf("%d %d\n",firstnum,secondnum);
    if(abs(firstnum-num)== abs(secondnum-num))
    {
        printf("%d",secondnum);
    }
    else if(abs(firstnum-num)<abs(secondnum-num))
    {
        printf("%d",firstnum);
    }
    else
    {
        printf("%d",secondnum);
    }
}
