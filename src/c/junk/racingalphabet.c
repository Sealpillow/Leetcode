#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define PI 3.142857
#define dia 60
// count the number of each alpha in the sentence.
// Start position will be the first letter of the sentence
int main() {

    int n;
    scanf("%d",&n);
    char word[20][121],*p, alpha[26];
    for(int i=0;i<n;i++)
    {
        fgets(word[i],121,stdin);
        if(p=strchr(word[i],'\n'))
        {
            *p='\0';
        }
    }
    cycle = PI*dia;
    p = cycle /28; //per space
    
    time = dist/s;
    printf("%d",rec(n));
    return 0;
}
