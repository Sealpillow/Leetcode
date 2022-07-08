#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,index,count,num[20];
    char word[50],color[20][50],digit[20][50];
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        memset(color[i],'\0',50);
    }
    for(int i=0;i<n;i++)
    {
        fgets(word,50,stdin);
        index =0;
        if(word[0]>=48 && word[0]<=57) // first char is a digit, push it to a digit array
        {
            while(word[index]!=' ')
            {
                digit[i][index]= word[index];
                index++;
            }
            num[i] = atoi(digit[i])/2; // if the first digit is num of the radius is halfed
            index++; // to set index to the next char after ' '
            count = 0;
            for(int x=index;x<strlen(word)-1;x++) // strlen()-1 to not include '\n'
            {
                color[i][count]= word[x];
                count++;
            }
        }
        else
        {
            while(word[index]!=' ')
            {
                color[i][index]= word[index];
                index++;
            }
            index++;
            count=0;
            for(int x=index;x<strlen(word)-1;x++)
            {
                digit[i][count]= word[x];
                count++;
            }
            num[i] = atoi(digit[i]);
        }
        memset(word,'\0',strlen(word));
    }
    //bubble sort
    int temp;
    char w[20];
    for(int i=0;i<n-1;i++)
    {
        // Last i elements are already in place
        for(int j=0;j<n-i-1;j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                strcpy(w,color[j]);
                num[j] = num[j+1];
                strcpy(color[j],color[j+1]);
                num[j+1] = temp;
                strcpy(color[j+1],w);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",color[i]);
    }
}
