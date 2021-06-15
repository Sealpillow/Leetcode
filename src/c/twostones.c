//twostones.c
#include <stdio.h>

int main() {

    int stones;
    scanf("%d",&stones);
    if(stones%2==1)
    {
        printf("Alice");
    }
    else
    {
        printf("Bob");
    }
    return 0;
}
