#include <stdio.h>

int main() {
    int day;
    char mth[4];
    scanf("%s %d",mth,&day);
    if((mth[0]=='D'&& day==25)||(mth[0]=='O'&& day==31))
    {
        printf("yup");
    }
    else
    {
        printf("nope");
    }
    return 0;
}
