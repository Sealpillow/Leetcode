//freefood.c
#include <stdio.h>

int main() {
    
    int n,s,t,count=0,arr[366]={0};//declare arr[366] so that there is arr[365], 366 is identified as length
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&s,&t);
        for(int x=s;x<=t;x++)//set range from s to t(inclusive)
        {
            arr[x]++; //input free food count on that day in arr[day]
        }
    }
    for(int i=1;i<=365;i++) //check how many days have free food for atleast 1 day
    {
        if(arr[i]>0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
