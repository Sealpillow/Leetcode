#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char input[1000],*p,sort[1000][1000],str1[5],str2[5],x,y;
    int total=0;
    fgets(input,1000,stdin); //get input string
    if(p=strchr(input,'\n'))
    {
        *p='\0';
    }
    int len=strlen(input);
    int j=0,g=0,count=0;
    // to sort the numbers string using ';', each sort[i] is a range or individual digit
    // 1-3;5;7;10-13
    // sort[0] = '1-3'
    // sort[1] = '5'
    for(int i=0;i<len;i++)
    {
        if(input[i]==';') //when there is a ';' means new string number
        {
            j++;        //set new string
            g=0;        // this to set the new string to first index
        }
        else
        {
            sort[j][g]= input[i]; //sort[1][0] =input[5]
            g++;
        }
    }

    for(int c=0;c<j+1;c++)
    {
        if(strchr(sort[c],'-')) //check if string is a range
        {
            int len2=strlen(sort[c]);
            int a=0;
            for(int k=0;k<len2;k++)
            {
                if(sort[c][k]=='-') //end of range
                {
                    int b=0;
                    for(int w=k+1;w<len2;w++)
                    {
                        str2[b] = sort[c][w];
                        b++;
                    }
                    break;

                }
                else //start of range
                {
                    str1[k] = sort[c][k];
                }
            }
            int num1 = atoi(str1); //1
            int num2 = atoi(str2); //3
            total+= num2-num1+1; 
            memset(str1,'\0',5); // wipe memory of str1
            memset(str2,'\0',5); // wipe memory of str2

        }
        else //string is a digit
        {
            total++;
        }
    }
    printf("%d",total);
    return 0;
}
