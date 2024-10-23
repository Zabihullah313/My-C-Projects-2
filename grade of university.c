#include <stdio.h>
int main(void){
    float num;

    printf("enter sum of your score; ");
    scanf("%f",&num);
    if (num>100||num<0)
        printf("wrong number entered");
    else if(num<=100&&num>=97)
        printf("you are (A+)");
    else if(num<97&&num>=94)
        printf("you are (A)");
    else if(num<94&&num>=90)
        printf("you are (A-)");
    else if(num<90&&num>=87)
        printf("you are (B+)");
    else if(num<87&&num>=84)
        printf("you are (B)");
    else if(num<84&&num>=80)
        printf("you are (B-)");
    else if(num<80&&num>=77)
        printf("you are (C+)");
    else if(num<77&&num>=74)
        printf("you are (C)");
    else if(num<74&&num>=70)
        printf("you are (C-)");
    else if(num<70&&num>=67)
        printf("you are (D+)");
    else if(num<67&&num>=64)
        printf("you are (D)");
    else if(num<64&&num>=60)
        printf("you are (D-)");
    else if(num<60)
        printf("you are failed");
}