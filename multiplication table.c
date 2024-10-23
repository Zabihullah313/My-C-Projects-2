#include<stdio.h>
int main(void)
{
    int num,i=1;
    scanf("%d",&num);
    while(i<=num){
        for(int j=1;j<=num;j++){
            int temp=i*j;
            printf("%d ",temp);
        }
    printf("\n");
    i+=1;

    }
}
