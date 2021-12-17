#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // input is till 10^18
    // size of long long 8 bytes while int and long is 4 bytes
    // One byte is equivalent to eight bits
    // int is 16 bits, for long it is 32 bits and long long must contain at least 64 bits.
    long area;
    scanf("%ld",&area);
    printf("%.6f\n",sqrt(area)*4); //relative error of at most 10−6 mean till 6 dp
}
