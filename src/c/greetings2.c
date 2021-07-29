#include <stdio.h>
#include <string.h>
int main() {

    char string[1000];
    int count=0;

    scanf("%s",string);
    int length =strlen(string);
    for(int i=0;i<length;i++)
    {
        if(string[i]=='e')
        {
            count++;
        }
    }
    printf("h");
    for(int i=0;i<count*2;i++)
    {
        printf("e");
    }
    printf("y");
    return 0;
}
