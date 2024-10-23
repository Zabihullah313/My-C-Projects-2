#include <stdio.h>
int main() {
    int n;
    printf("Enter the  n: ");
    scanf("%d",&n);
    /* for even number
     int i;
     for(i=0;i<=n;i+=2)
     printf("%d\n",i);
     */
    int i=1;
    while (i<=n){
        printf("%d\n",i);
        i+=2;
    }}