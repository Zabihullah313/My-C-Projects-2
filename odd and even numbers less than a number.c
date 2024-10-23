#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("These are even number\tThese are odd number \n");
    for (int i=0;i<=n;i++){
        if(i%2==1)
            printf("%d\n",i);
        else
            printf(" %d\t\t\t   ",i);
    }}