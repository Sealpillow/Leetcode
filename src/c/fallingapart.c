#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    int n,alice=0,bob=0,num[16];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(num[j]<num[j+1]) //sort from largest to smallest, if(num[j]>num[j+1]) small to large
            {
                int temp = num[j];
                num[j]=num[j+1];
                num[j+1]= temp;
            }
        }
    }
    printf("%d %d %d\n",num[0],num[1],num[2]);
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            alice += num[i];
        }
        else
        {
            bob += num[i];
        }
        printf("%d %d\n",alice,bob);
    }
    printf("%d %d",alice,bob);
}
