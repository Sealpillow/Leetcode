//savingforretirement.c
#include <stdio.h>

int main() {

    int b_age,b_retire,b_save,b_work,b_total,a_age,a_save,a_retire,a_work=0,a_total=0;

    scanf("%d %d %d %d %d",&b_age,&b_retire,&b_save,&a_age,&a_save);

    b_work =b_retire-b_age;
    b_total=b_save*b_work;
    while(b_total>=a_total)
    {
        a_total=a_total+a_save;
        a_work++;
    }
    a_retire = a_age+a_work;
    printf("%d",a_retire);

    return 0;
}
