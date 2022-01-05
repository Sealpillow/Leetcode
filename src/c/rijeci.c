#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
A->B->BA->BAB->BABBA->BABBBA
Don't have to play with arrays
count the number of A's and B's
if i gt 5 counts of A->B 5 count of A = 5 count of B, find the multiple
if i gt 3 counts of B->BA  1 count of B = 3 count of A + 3 count of B,
find the multiple this enable to create an equation
num_a= multipleB;
num_b = multipleA+multipleB;

*/

int main()
{
    int num,num_a=1,num_b=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        int multipleA = num_a;
        int multipleB = num_b;
        num_a= multipleB;
        num_b = multipleA+multipleB;
    }
    printf("%d %d",num_a,num_b);
}
