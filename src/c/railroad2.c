#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
        even
yellow orange
   0     0   <- yellow = orange
   1     0   <- yellow > orange
   0     2
   1     2   <- yellow < orange
   1     4
   2     4
   3     4
Therefore a long as orange is even, it is possible.
*/
int main()
{
    int yellow,orange;
    scanf("%d %d",&yellow,&orange);
    //printf(condition statement ? when True do this:When False do this);
    printf(orange%2==0?"possible":"impossible");
    
    /*
    if else statement
    if(orange%2==0)
    {
        printf("possible");
    }
    else
    {
        printf("impossible");
    }
    */
}
