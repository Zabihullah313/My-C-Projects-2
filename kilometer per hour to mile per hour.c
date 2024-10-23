#include<stdio.h>

int main(){
    double kilo,mile;
    printf("Enter your kilometer per hour:");
    scanf("%lf",&kilo);
    mile=kilo/1.609344334;
    printf("%.3lf kilometer per hour is %lf mile per hour.",kilo,mile);
    return 0;
}