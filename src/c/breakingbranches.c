#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Alice\n%d",n/2);
    }
    else
    {
        printf("Bob");
    }
}
