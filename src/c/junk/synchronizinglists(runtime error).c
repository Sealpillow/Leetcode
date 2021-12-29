#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
Is correct just that sort take too long
*/

void sortlist(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}



int main()
{
    int n,list1[101],list2[101],sort1[101];
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                scanf("%d",&list1[i]);
                sort1[i]=list1[i];
            }
            for(int j=0;j<n;j++)
            {
                scanf("%d",&list2[j]);
            }
            //sort
            sortlist(&sort1,n);
            sortlist(&list2,n);
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(list1[i]==sort1[j])
                    {
                        printf("%d\n",list2[j]);
                    }
                }
            }
            putchar('\n');
        }
    }
}
