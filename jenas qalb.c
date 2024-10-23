#include <stdio.h>
int main()
{
    int n;
    int first,second ,third,fourth,fifth;
    printf("Enter a five digit number:");

    scanf("%lld",&n);
    first=n%10;
    n=n/10;

    second=n%10;
    n=n/10;

    third=n%10;
    n=n/10;
    fourth=n%10;
    n=n/10;
    fifth=n%10;
    if (first==fifth&&second==fourth)
        printf("Beautiful number");
    else
        printf("Not beautiful");
    return 0;
}