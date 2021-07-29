#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char c[100];
        scanf("%s",c);
        int l = strlen(c);
        printf("%d\n",l);
    }  
    return 0;
}
