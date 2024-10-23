#include <stdio.h>
int main() {
    //int counter =10; we can control the loop too!
    int n;
    int min;
    int max;

    int i = 1;
    printf("Enter a number ;");
    scanf("%d",&n);
    min = n;
    max = n;
    while (1) {
        printf("Enter a number (-1 to stop);");
        scanf("%d",&n);
        if (n==-1)
            break;
        if (max<n)
            max=n;
        if (min>n)
            min=n;
        i++;

    }
    printf("Max=%d , Min=%d",max,min);
    return 0;
}