#include <stdio.h>

int main() {

    int data,usage,months,total=0;
    scanf("%d",&data);
    scanf("%d",&months);
    for(int i=0;i<months;i++)
    {
        scanf("%d",&usage);
        total= total + data-usage;
    }
    printf("%d",total+data);

    return 0;
}
