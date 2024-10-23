#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
int swap(int a,int b);
void bubble_sort(int arr[],int size);
int recursive_power(int n,int pow);
void digit_separator(unsigned long long n);
void draw_square(int n,char a);
void rectangle(int n,char a);
int multiple(int a,int b);
int Lodu_toss(void);
int sher_khat(void);
void prime(int num);
int square(int a);
int cube(int a);
double power(double num,int pow);
double square_root(double num);
double absolute_value(double num);
double quad_equation(double a,double b,double c);
int maximum(int a,int b,int c,int d, int e);
int maximum3num(int a,int b,int c);
int print_prime(int num);
int check_prime(int num);
int factorial(int n);
int recursive_factorial(int a);
int fibonacci(int n);
int recursive_fibonacci(int n);
int recursive_sigma(int n);
int rec_odd_sigma(int n);
double round(double num);
double p_round(double n);
void odd_even(int a);
void is_perfect(int a);
int gcd(int a, int b);
int lcm(int a,int b,int c);





int main(void ){
    int arr[]={51,5,56,71,710,34,50,11,7,8,100,99,78,76,56,65,45,73,34,22,23,25,25};
    int size=sizeof arr/sizeof arr[0];
    bubble_sort(arr,size);
}


int swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
//bubble sort
void bubble_sort(int arr[],int size) {
    for (int j = 0; j < size; ++j) {
        for (int i = 0; i < size; i++) {
            if (arr[i] > arr[i + 1]) { //swap
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    //printing the sorted array
    printf("{");
    for (int i = 0; i <= size; ++i) {
        if (i == size ){
            printf("%d}", arr[i]);
            break;}
        printf("%d, ", arr[i]);

    }

}
//recursive_power
int recursive_power(int n,int pow){
    if (pow==1)//end condition
        return n;
    else
        return n* recursive_power(n,pow-1);
}





//least common multiple of 3 numbers you can change to 4 or 5 or 6 ....

int lcm(int a, int b,int c){
    int temp=a;
    while (5)
    {
        if( temp%a==0&&temp%b==0&&temp%c==0)
            return temp;
        temp++;
    }

}



//greatest common divisor of two number
int gcd(int a , int b){
    while(a!=b){
        if (a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;//or b
}

//it is a number which the sum of its factors equals to itself.
void is_perfect(int a) {
    int arr[1000];
    int add=0;
    int j=-1;
    for (int i = 1; i < a/2+1 ; ++i) {
        if (a % i == 0) {
            j++;
            arr[j]=i;
        }
    }

    for(int i=0;i<=j;i++){
        add=add+arr[i];
    }
    if (a == add) {
        printf(" %d =",a);
        for (int i = 0; i <= j; ++i) {
            printf(" %d ",arr[i]);
        }
        printf("\n");
    }
}


//separates the digits of a number
void digit_separator(unsigned long long n){
    int arr[30];
    int i=0;
    int temp;
    while(n>0) {
         temp = n % 10;
         arr[i]=temp;
         i++;
         n=n/10;

    }
    for (int j = 0; j < i; ++j) {
        printf("%d ",arr[j]);

    }
}
//for reverse printing a number (j=i-1;j>=0;j--);



//rectangle with it`s char to draw
void rectangle(int n,char a){
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j<=n/2 ; ++j) {
            printf("%c ",a);

        }
        puts("");

    }
}

//square with it`s char to draw
void draw_square(int n,char a){
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j<=n ; ++j) {
            printf("%c ",a);

        }
        puts("");

    }
}

//odd or even
void odd_even(int a){
    if(a%2==0)
        printf("Even");
    else if(a%2==1)
        printf("Odd");
}


//multiple
int multiple(int a,int b) {
    if (a % b == 0 || b % a == 0)
        return 1;
    else
        return 0;
}

//Round_off

double round(double num){
    double decim;
    decim=num-(int )num;
    if (decim>=0.50)
        return (int)num+1;

    else
        return (int )num;
    }
//professional round off
// you can adjust the precision of the floating point number by 1000 or 10000 ...

double p_round(double n){
    double num= round(n*100)/100;
    return num;
}


//sigma of natural numbers less than a number
int recursive_sigma(int n){
    if (n==0)
        return 0;
    else
        return n+ recursive_sigma(n-1);

}

//
int rec_odd_sigma(int n) {
    if (n % 2 == 1) {
        if (n == 1)
            return 1;
        else return n + rec_odd_sigma(n - 2);
    }
    else {
        printf("Enter odd number!");
    }}


//Recursive_Fibonacci
int recursive_fibonacci(int n){
    if (n==0||n==1)
        return n;
    else return recursive_fibonacci(n-1) + recursive_fibonacci(n-2);
}


//Fibonacci
int fibonacci(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else {
        int n0 = 0, n1 = 1, n2;
        for (int i = 2; i <= num; i++) {
            n2 = n1 + n0;
            n0 = n1;
            n1 = n2;
        }
        return n2;
    }
}

// factorial
int factorial(int n){
    int res=1;
    for (int i=n;i>=1;i--){
       res=res*i;
    }
    return res;
}
//recursive_factorial
int recursive_factorial(int a){
    if (a==0||a==1)
        return 1;
    else
        return a * recursive_factorial(a - 1);
}

//sher and khat
int sher_khat(void){
    srand(time(NULL));
    int num=rand()%2;
    if (num==0)
        printf("Sher!");
    else
        printf("Khat!");
}

//lodu toss

int Lodu_toss(void){
    srand(time(NULL));
    int n=rand()%6+1;
    printf("< you got %d >",n);
}

//printing the prime numbers less than a number
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

//calculate the square of a number;
int  square(int a){
    int  res=a*a;
    return res;}


    //calculate the cube of a number:
    int cube(int a){
        return a*a*a;
}

//power a^b
double power(double num,int pow){
    double num_base=num;
    num=1.0;
    for(int i=1;i<=pow;i++){
        num*=num_base;
    }
    return num;
}

//square root of a number
double square_root(double num){
    double temp=1.0;

    if (num==1.0||num==0.0)
        return num;


        for (double res=0.0; res <= num;) {
            res=temp*temp;
            temp=temp+0.00001;
        }
    return temp;
}

//absolute value
double absolute_value(double num){
    if(num>=0)
        return num;
    else
        return num*-1;
}

//quadratic equation
double quad_equation(double a,double b,double c){
   double x1=(-b+ sqrt(b*b-4*a*c))/(2*a);
   double x2=(-b- sqrt(b*b-4*a*c))/(2*a);
    return x1+x2;
}


//maximum of 5 number;
int maximum(int a,int b,int c,int d, int e)
{
     int  max=a;
     if(b>a)
         max=b;
     if (c>b)
         max=c;
     if (d>c)
         max=d;
     if (e>d)
         max=e;
        return max;
}
//maximum of 3 numbers;
int maximum3num(int a,int b,int c)
{
    if (a>=b&&a>=c)
        return a;
    else if (b>=a&&b>=c)
        return b;
    else
        return c;
}


//prime number
void prime(int num){
    int flag=1;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0)
            flag=0;
    }
    if (flag==1)
        printf("%d is prime number.",num);

    else
        printf("%d is not prime number.",num);
}