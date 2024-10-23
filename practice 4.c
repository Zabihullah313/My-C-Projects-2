#include <stdio.h>
int main() {

    int  arr[30] ;
    int n;
    scanf("%d",&n);
    int k=0;
    while(n>0){
        arr[k] = n % 10;
        n/=10;
        k++;
    }
    int len = k-1;

    for(int i=0;i<=k-1;i++){
        for(int j=0;j<arr[len];j++){
            printf("%d",arr[len]);
        }
        if (i==k-1)
            continue;
        printf("\n");
        len--;
    }
}

