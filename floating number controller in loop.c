#include <stdio.h>
#include <math.h>
int main (void)
{
    double x;
    for (x=0.000001;x<=0.0001;x+=0.000001){
        printf("%.7lf\n",x);
    }}