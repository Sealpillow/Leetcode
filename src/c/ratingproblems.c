//ratingproblems.c
#include <stdio.h>

int main() {

    int num,done,rating,total=0;
    scanf("%d %d",&num,&done);
    for(int i=0;i<done;i++)
    {
        scanf("%d",&rating);
        total = total+rating;
    }
    float min_final_rating = (total+(num-done)*-3.0)/num;
    float max_final_rating = (total+(num-done)*3.0)/num;
    printf("%g %g",min_final_rating,max_final_rating); //%g remove trailing zeros
}
