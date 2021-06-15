//aaah.c
#include <stdio.h>
#include <string.h>

int main() {
    
    char first[1000],second[1000];

    scanf("%s",first);
    scanf("%s",second);
    if(strlen(first)<strlen(second))
    {
        printf("no");
    }
    else
    {
        printf("go");
    }

    return 0;
}
