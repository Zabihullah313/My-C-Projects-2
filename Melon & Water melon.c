#include <stdio.h>

int main ()
{
    int h , k ;

    scanf("%d",&h);
    scanf("%d",&k);

    if ((k+2*h)%2==0)
        printf("YES");
    else
        printf("NO");


    return 0 ;
}
