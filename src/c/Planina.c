#include <stdio.h>
#include <math.h>
/*
  formula base on row:
    1          2           3               4
   ...       .....     .........   .................  
 3(1+2*1)   5(1+2*2)    9(1+2*3)       17(1+2*4)  

*/
int main() {
    int n,row,pts;
    scanf("%d",&n);
    row = 1 + pow(2,n); //formula to find sequence
    pts= row * row;
    printf("%d",pts);
    return 0;
}
