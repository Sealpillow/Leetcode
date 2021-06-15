//pet.c
#include <stdio.h>

int main() {

    int x,g1,g2,g3,g4,total,highest=0;

    for(int i=1;i<6;i++)
    {
        scanf("%d %d %d %d",&g1,&g2,&g3,&g4);
        total = g1+g2+g3+g4;
        if(total>highest)
        {
            x=i;
            highest=total;
        }
    }

    printf("%d %d\n",x,highest);

    return 0;
}
