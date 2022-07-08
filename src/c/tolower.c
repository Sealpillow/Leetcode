#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Anthony can only converts the first character of the string to lowercase.
// To pass test case the rest of the char must be lower case
// e.g abc  pass
// e.g Abc  pass
// e.g aBc  fail
int main()
{
    int p,t,len,status,count=0;
    char word[50001];
    scanf("%d %d",&p,&t);
    for(int i=0;i<p;i++)
    {
        status = 0;
        for(int j=0;j<t;j++)
        {
            scanf("%s",word);
            len =strlen(word);
            for(int x=1;x<len;x++)
            {
                // at any occurrence of a Caps after the first char = fail
                if(word[x]>='A'&& word[x]<='Z') // if at least 1 CAPS in word, Anthony cant pass
                {
                    status =1;
                    break;
                }
            }
            memset(word,'\0',len);
        }
        if(status==0) // after checking all test cases for that 1 problem, if status is still 0
        {
            count++;
        }
    }
    printf("%d",count);
}
