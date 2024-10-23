#include <stdio.h>
int main(){
    int a,b,c,d,e ,max;
    printf("Enter 5 numbers; ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    if (a>b&&a>c&&a>d&&a>e)
        max=a;
    else if(b>a&&b>c&&b>d&&b>e)
        max=b;
    else if(c>a&&c>b&&c>d&&c>e)
        max=c;
    else if(d>a&&d>c&&b<d&&d>e)
        max=d;
    else if(e>a&&e>b&&e>c&&d<e)
        max=e;
    printf("the max number is %d",max);

}