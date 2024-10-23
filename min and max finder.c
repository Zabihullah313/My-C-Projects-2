
#include <stdio.h>
int main (void)
{
    int max;
    int min;
    int n;
    printf("Enter your number");
    printf("(Enter -1 to stop.):");
    scanf("%d",&n);
    max=n;
    min=n;
    while (4){

        printf("Enter your number :");
        scanf("%d",&n);
        if (n==-1)
            break;
        if(max<n)
            max=n;
        if (min>n)
            min=n;
    }
    printf("The max is %d\n",max);
    printf("The min is %d",min);
}