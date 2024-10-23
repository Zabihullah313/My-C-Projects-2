#include<stdio.h>
int main(void)
{
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=10;j=j+1){
            int temp=i*j;
            printf("%d ",temp);
        }
        printf("\n");
    }
}
