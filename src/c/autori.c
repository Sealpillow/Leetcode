autori.c
#include <stdio.h>
#include <string.h>

int main() {

    int length,x=0;
    char string[100],output[100];
    scanf("%s",string);
    length = strlen(string);
    for(int i=0;i<length;i++)
    {
        if(string[i]>=65&&string[i]<=90)
        {
            output[x]=string[i];
            x++;
            
        } 
    }
    for(int i=0;i<x;i++)
    {
        printf("%c",output[i]);
    }
    
    return 0;
}
