#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c,d,e;
    printf("Enter 5 numbers; ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    int m1=((a+b)+ labs(a-b))/2;
    int m2=((m1+c)+ labs(m1-c))/2;
    int m3=((m2+d)+ labs(m2-d))/2;
    int max=((m3+e)+ labs(m3-e))/2;

    printf("the max number is %d",max);
    return 0;

}