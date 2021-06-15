//dicegame.c
#include <stdio.h>

int main() {
    //Expected value,EV:A quantity equal to the average result of an experiment after a large number of trials.
   
    int a1G,a2G,b1G,b2G,a1E,a2E,b1E,b2E;
    scanf("%d %d %d %d",&a1G,&b1G,&a2G,&b2G);
    float EV_gunnar= (a1G+b1G)/2.0+(a2G+b2G)/2.0; //total EV of 2 dice
    scanf("%d %d %d %d",&a1E,&b1E,&a2E,&b2E);
    float EV_emma = (a1E+b1E)/2.0+(a2E+b2E)/2.0;
    if(EV_emma>EV_gunnar)
    {
        printf("Emma");
    }
    else if(EV_emma<EV_gunnar)
    {
        printf("Gunnar");
    }
    else
    {
        printf("Tie");
    }

    return 0;

}
