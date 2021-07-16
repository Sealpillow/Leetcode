#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int dec(char num[],int d)
{
    int total=0,n=0;
    printf("num[0]:%c d:%d\n",num[0],d);
    if(d>1)
    {
        for(int x=d-1;x>=0;x--)
        {
            printf("x%d,digit:%d\n",x,num[n]-48);
            total+=(num[n]-48)*pow(10,x);
            n++;
        }
        printf("total:%d\n",total);
        return total;
    }
    else
    {
        printf("d: %c single digit value:%d\n",num[0],num[0]-48);
        return num[0]-48;
    }
}
bool check(char string[1000], int cur,int counter)
{
    printf("%d %d\n",cur-counter,cur);
    for(int i=cur-counter;i<cur;i++)
    {
        printf("i:%d str%c\n",i,string[i]);
        if(string[i]=='-')
        {
            return false;
        }
    }
    return true;
}


int main() {
    int l,final_count=0,count1=0,digitcount1=0;
    char s[1000];
    scanf("%s",s);
    l=strlen(s);

    for(int i=0;i<l+1;i++)
    {
        
        char s1[1000];
        printf("i:%d l-1:%d\n",i,l-1);
        printf("i:%d l:%d s[i]:%c\n",i,l,s[i]);
        if((s[i]>='0'&&s[i]<='9')||s[i]=='-')
        {
            s1[i]=s[i]; 
            digitcount1++;  
            printf("digitcount1:%d\n",digitcount1);    
        }
        
        else
        {
            char s2[1000],s3[1000];
            int digitcount2=0,digitcount3=0;
            if(check(s1,i,digitcount1))//when 5;
            {
                printf("single;%d\n",s[i-1]-48);
                final_count++;
                digitcount1=0;
                printf("count1:%d i:%d add: %d final:%d\n",count1,i,s[i-1]-48,final_count);
            }
            else
            {
                for(int j=0;j<i;j++)
                {
                    printf("j:%d i: %d s1[j]:%c\n",j,i,s1[count1+j]);
                    if(s1[count1+j]!='-') //count digit of 1st half
                    {
                        printf("i:%d j:%d count1+j:%d s1[count1+j]:%c\n",i,j,count1+j,s1[count1+j]);
                        s2[j]=s1[count1+j];
                        printf("s2[0]:%c\n",s2[j]); 
                        digitcount2++;
                        printf("dc2:%d\n",digitcount2);
                    }
                    else // -3;
                    {

                        for(int k=j+1;k<i-count1;k++)
                        { 
                            printf("!i:%d j:%d count1+k:%d s1[count1+k]:%c\n",i,j,count1+k,s1[count1+k]);
                            s3[k-j-1]=s1[k+count1]; 
                            printf("k-j-1:%d s3[]:%c ,s3[0]:%c\n",k-j-1,s3[k-j-1],s3[0]);
                            digitcount3++; 
                            printf("dc3:%d\n",digitcount3);
                        } 
                        break;               
                    }

                }
                printf("s2:%d s3:%d\n",s2[0],s3[0]);
                int a=dec(s2,digitcount2);
                int b=dec(s3,digitcount3);
                printf("a:%d b:%d\n",a,b);
                final_count+=(b-a+1);
            
            }
            count1=i+1;
            printf("count: %d\n",count1);
            digitcount1=0;
            printf("final:%d\n",final_count);
        }
        
    }
    printf("l:%d final:%d",l,final_count);
    return 0;
 
}
