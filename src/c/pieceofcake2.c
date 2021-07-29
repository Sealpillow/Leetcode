#include <stdio.h>

int big(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
/*
     _____       _____
    |     |     |   __|
    |   __|     |  |  |
    |__|__|     |__|__|   
    length and breadth of biggest slice after cut varries, so find biggest of both length and breadth 
*/


int main() {
    int n,h,v,volume;
    scanf("%d %d %d",&n,&h,&v);
    volume = big(n-h,h)*big(n-v,v)*4; // find the max remainder length and breadth after cut.
    printf("%d",volume);
    return 0;
}
