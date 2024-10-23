#include <stdio.h>
int main(){
    int n=10;
    int i=1;
    int num;
    int max ;
    int next_max;
    printf("Enter a number :");
    scanf("%d",&num);
    max=num;
    next_max=num;

    while(i<n){
        printf("Enter a number :");
        scanf("%d",&num);
        if (max<num){
            max=num;
            continue;}
        if (max>next_max){
            if (num>next_max)
                next_max=num;
        }

        i++;
    }
    printf("The max=%d , the next large number=%d",max,next_max);
}