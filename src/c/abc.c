#include <stdio.h>
#include <string.h>

int main(void) {
    int num[3],temp;
    int n = sizeof(num)/sizeof(num[0]);
    char alpha[3];
    scanf("%d %d %d",&num[0],&num[1],&num[2]);
    scanf("%s",&alpha);
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(num[j+1]<num[j])
            {
                temp = num[j]; 
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        
        if(alpha[i]=='A')
        {
            printf("%d",num[0]);
        }
        if(alpha[i]=='B')
        {
            printf("%d",num[1]);
        }
        if(alpha[i]=='C')
        {
            printf("%d",num[2]);
        }
        printf(" ");
    }

    return 0;
}
