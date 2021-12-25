#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    int n,num[100001],highest=0,count=0,total=0,temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    //sort largest to smallest
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(num[j]<num[j+1])
            {
                temp= num[j];
                num[j]= num[j+1];
                num[j+1]= temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        count++;
        if(num[i]+count>highest)
        {
            highest = num[i]+count;
        }
    }
    printf("%d",highest+1);
}
