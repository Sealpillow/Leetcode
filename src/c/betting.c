#include <stdio.h>
#include <stdlib.h>

int main()
{
    float percentage,option1,option2;
    scanf("%f",&percentage);
    option1 = 1/(percentage/100.0);
    option2 = 1/(1-percentage/100.0);
    printf("%f\n",option1);
    printf("%f\n",option2);
}
