//thelastproblem.c
#include <stdio.h>

int main() {

    char string[50];
    scanf("%[^\n]s",string);
    printf("Thank you, %s, and farewell!",string);
    return 0;
}
