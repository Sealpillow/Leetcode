#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int n,line[100],input[100],count=1;
    scanf("%d",&n);
    for (int i=0;i<n-1;i++)
    {
        scanf("%d",&input[i]);
    }
    line[0]=1;
    for(int i=2;i<n+1;i++)
    {
        line[input[i-2]+1]=i; // index of line[] depends on the distance between first and the ith position
        count++;
    }
    for(int i=0;i<count;i++)
    {
        printf("%d ",line[i]);
    }
}
