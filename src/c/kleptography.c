#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ToChar(x) (char)(((26 + (x)) % 26)+'a')
#define ToNum(x) ((x)-'a')

int main()
{
    int num,n,m,sum;
    scanf("%d %d",&n,&m);
    char plain[n+1],cipher[m+1],word[m+1];
    word[m]=0;
    scanf("%s",plain);
    scanf("%s",cipher);
    //copy the plain text into the end of the findword
    for (int i = 0; i < n; i++)
    {
        word[m-1-i] = plain[n-1-i];
    }
    /*
    1 12
    d
    fzvfkdocukfu
    -----------d
    
    start conversion from the last letter from word,
    u-d= 17 -> (17+26)%26 + 'a' = r -> hence the 2nd last letter will be r
    cipher:u word:d word:r
    
    next use the 2nd last letter from word,
    f-r= -12 -> (-12+26)%26 + 'a' = o -> hence the 2nd last letter will be o
    cipher:f word:r word:o
    
    the reason why (x+26)%26 is so that in a case where x is negative, 
    it will be converted to postive value of mod 26
    */
    for (int i = m-n-1; i >= 0; i--)
    {
        //printf("cipher:%c word:%c ",cipher[i+n],word[n+i]);
        word[i] = ToChar(ToNum(cipher[i+n])-ToNum(word[n+i]));
        //printf("word:%c\n",word[i]);
    }
    printf("%s\n", word);
}
