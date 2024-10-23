#include<stdio.h>

long long int fibonacci(int n){
    if (n == 0 || n == 1)
        return n;

    long long int fib_array[100];
    fib_array[0] = 0;
    fib_array[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib_array[i] = fib_array[i - 1] + fib_array[i - 2];
    }
    return fib_array[n];
}

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The fibonacci of %d is %lld",n, fibonacci(n));
    return 0;
}