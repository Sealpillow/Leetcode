#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    char word[10][100];
    char *p;
    printf("");
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        scanf("%s",word[i]);
        if(p=strchr(word[i],'\n'))
        {
            *p="\0";
        }
    }
    for(int j=0;j<n;j+=2)
    {
        printf("%s\n",word[j]);
    }
    return 0;
}
