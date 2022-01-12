#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
Find the smallest serving you can get from the ratio of the 3 juices
As that is the max limit.
e.g
9 9 9
3 2 1
orange = 9/3 = 3 servings
apple = 9/2 = 4.5 servings
pineapple = 9/1 = 9 servings

Hence the max serving is 3 with the current ratio. Anything outside are the leftovers
*/

int main()
{
    float a,b,c,i,j,k,orange,apple,pineapple,multiple;
    scanf("%f %f %f",&a,&b,&c);
    scanf("%f %f %f",&i,&j,&k);
    orange = a/i;
    apple = b/j;
    pineapple = c/k;
    //find largest ratio
    if(orange<apple && orange<pineapple)
    {
        multiple = orange;
    }
    else if(apple<orange && apple<pineapple)
    {
        multiple = apple;
    }
    else
    {
        multiple = pineapple;
    }
    printf("%f %f %f",a-i*multiple,b-j*multiple,c-k*multiple);
}
