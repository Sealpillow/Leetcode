#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    int length,alpha[26]={0};
    char s[50];
    bool guess=false;
    scanf("%s",s);
    length = strlen(s);
    for(int i=0;i<length;i++)
    {
        alpha[s[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        if(alpha[i]>1)
        {
            guess =true;
            break;
        }
    }
    if(guess==false)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
    return 0;
}
