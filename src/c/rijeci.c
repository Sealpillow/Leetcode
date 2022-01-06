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

Is also the same as saying the number of A's, you minus 1 A plus 1 B
and number of B's you plus 1 A, hence
for(int j=0;j<multipleA;j++)
{
    num_a--;
    num_b++;
}
for(int j=0;j<multipleB;j++)
{
    num_a++;
}

instead of the previous 2 equations
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
