#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    int n,index,total;
    char word1[100],word2[100],*c,convert1[100],convert2[100],sum[100];
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        fgets(word1,100,stdin); // get each line input
        fgets(word2,100,stdin);
        index = 0;
        for(int a=0;a<strlen(word1);a++) // remove the space between array
        {
            if(word1[a]!=' ')
            {
                convert1[index] = word1[a];
                index++;
            }
        }
        index = 0;
        for(int b=0;b<strlen(word2);b++)
        {
            if(word2[b]!=' ')
            {
                convert2[index] = word2[b];
                index++;
            }
        }
        total = atoi(convert1)+ atoi(convert2); // sum of converted strings to int
        //printf("%d %d %d\n",atoi(convert1),atoi(convert2),total);
        sprintf(sum,"%d",total); // convert int to string
        //printf("%s\n",sum);
        for(int x=0;x<strlen(sum);x++) // print the array with space in between
        {
            printf("%c ",sum[x]);
        }
    }

}
