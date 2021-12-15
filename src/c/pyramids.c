#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int i=1,total=0;
int rec(int x)
{
    total += (1+i*2)*(1+i*2); // total number of block based on step
    if(x>total) // if the input > total block based on step, recursive continues
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
