#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    //create 2 list, one for input and the list
    int input[1001],list[1001],n=1;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }

    for (int i=0;i<n-1;i++)
    {
        scanf("%d",&input[i]);
    }
    //cross check between the list and input 
    for (int i=0;i<n;i++)
    {
        int x=0;
        for (int j=0;j<n-1;j++)
        {
            if(list[i]==input[j]) //if number list is in the input, means she have learnt that knot
            {
                x++;
            }
        }
        if(x==0) // after check the whole input in list, knot i not learnt
        {
            printf("%d",list[i]);
            break;
        }
    }
}
