#include <stdio.h>
#include <math.h>

//checks
int check_prime(int num){
    if (num==2)
        return num;
    int temp=0;
    for(int i=2;i<=sqrt(num);i++){
        if (num%i==0)
            temp++;

    }
    if (temp==0)
        return num;
    else
        return -1;//for composite number
}


int print_prime(int num) {
    int prime_counter=1;

    int prime_arr[100000];
    prime_arr[0] = 2;
    int j=0;
    for (int i = 3; i < num; ++i) {
        int pr=check_prime(i);
        if (pr!=-1)
        {
            j++;
            prime_arr[j]=pr;
            prime_counter++;}
    }


    for (int i = 0; i < prime_counter; i++) {
        printf("%d  ",prime_arr[i]);

    }
}

int main(void ){
    int x;
    printf("Enter your number:");
    scanf("%d",&x);
    printf("These are the prime numbers less than your number.\n");
    print_prime(x);
}