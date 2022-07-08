#include <stdio.h>
#include <stdlib.h>
int main()
{
    char word[1001],*p;
    p = word;
    scanf("%s",word);
    while(p!=NULL)
    {
        if(*p=='a')
        {
            printf("%s",p);
            return;
        }
        p++;
    }
}
