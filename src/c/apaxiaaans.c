//apaxiaaans.c
#include <stdio.h>
#include <string.h>

int main(void) {
    char word[250];
    scanf("%s",&word);
    int n = strlen(word);
    char prev=word[0];
    for(int i=1;i<n;i++)
    {
        while(word[i]==prev)
        {
            for(int x=i;x<n;x++)
            {
                word[x]=word[x+1];
                n=strlen(word);
            }
        }
        prev=word[i];
    }
    printf("%s\n",word);
    return 0;
}
