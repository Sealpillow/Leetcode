//somesum.c
#include <stdio.h>
/*
 1 2 3 4 5 6 7 8 9 10
odd 2,6,10
even 4,8
either 1,3,5,7
*/
int main() {

    int n;
    scanf("%d",&n);
    n=n%4; //to get multiple of 4: 4,8
    if(n==0) //no remainder 4,8
    {
        printf("Even");
    }
    else if(n==2) //remainder 2: 2,6,10
    {
        printf("Odd");
    }
    else//other remainder: 1,3,5,7
    {
        printf("Either");
    }
    return 0;
}
