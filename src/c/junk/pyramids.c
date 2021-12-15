int main() {

    int n;
    scanf("%d",&n);
    printf("%d",rec(n));
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int i=1,total=0;
/*
    total = 0 + 1   (1x1)
    total = 1 + 9   (3x3)
    total = 10 + 25  (5x5)

*/
int rec(int x)
{
    total += (1+i*2)*(1+i*2); // total number of block with addition to step,
    printf("%d\n",total);
    if(x>total) // if the input > total block based on step, recursive continues e.g 83>10 hence continues
    {
        i++; // increase step value
        return rec(x);
    }
    else // if input < total block based on step, recursive stops, return step number
    {
        return i;
    }

}

int main() {

    int n;
    scanf("%d",&n);
    printf("%d",rec(n));
    return 0;
}
