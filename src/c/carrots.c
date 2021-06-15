#include <stdio.h>

int main() {

    int count,problems;
    char word[20];
    scanf("%d %d",&count,&problems);
    for(int i=0;i<count;i++)
    {
        scanf("%s",word);
    }
    printf("%d",problems);
}
