#include <stdio.h>
int a;
int main() {
    printf("enter  a year: ");
    scanf("%d", &a);
    if (a % 4 == 0) {
        printf("%d is a leap year.\n", a);
    } else {
        printf("%d is not a leap year.\n",a);
    }
}
