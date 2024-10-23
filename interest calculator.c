#include <stdio.h>

int main()
{
    float rate;
    int days;
    float principal;
    float interest;
    while (5){
        printf("Enter the loan principal in Dollars (Enter -1 to end):");
        scanf("%f",&principal);
        if (principal==-1)
            break;
        printf("Enter the interest rate:");
        scanf("%f",&rate);
        printf("Enter term of the loans in days:");
        scanf("%d",&days);

        if (principal<0||days<0||rate<0){
            printf("Wrong input!");
            continue;}
        else{
            interest=principal*(float)days*rate/365;
            printf("The interest charge is $%.2f\n\n",interest);
        }
    }
}