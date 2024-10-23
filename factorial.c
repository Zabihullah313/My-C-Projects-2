#include<stdio.h>
long long int n;
void main(){
    printf("Enter a number to be factorialized: ");
    scanf("%lli",&n);
    long long int i=1;
    long long int res=1;
    while (n>=i){
            res=res*i;
            i++;
    }
    printf("%lli factorial is equal to %lli",n,res);

    }
