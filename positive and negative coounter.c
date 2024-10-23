#include<stdio.h>
int main(void){
    int num;
    int pos_count=0;
    int neg_count=0;
    printf("Enter 0 for stop: \n");
    printf("Enter the first number:");
    scanf("%d",&num);
    while (num!=0){
        if (num>0)
            pos_count++;
        else
            neg_count++;
        printf("Enter the next number");
        scanf("%d",&num);
    }
    printf("you entered %d positive number\n",pos_count);
    printf("you entered %d negative number\n",neg_count);
}