#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n=5,count=0;
    char num[16];
    scanf("%c %c %c %c %c",&num[0],&num[1],&num[2],&num[3],&num[4]);
    //bubble sort the number
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                int temp = num[j];
                num[j]= num[j+1];
                num[j+1]= temp;
                printf("%c %c %c %c %c\n",num[0],num[1],num[2],num[3],num[4]); //print when swap occur
            }
        }
    }
}
