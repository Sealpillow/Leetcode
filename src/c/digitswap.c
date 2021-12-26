#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char num[3],*p,x;
    fgets(num,3,stdin);
    if(p=strchr(num,'\n'))
    {
        *p='\0';
    }
    x = num[0];
    num[0] = num[1];
    num[1] = x;
    printf("%s",num);
    return 0;
}
