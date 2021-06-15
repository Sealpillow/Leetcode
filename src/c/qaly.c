//qaly.c
#include <stdio.h>

int main() {

    int num;
    float total=0,quality,years;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%f %f",&quality,&years);
        total = total+quality*years;
    }
    printf("%.3f",total);

}
