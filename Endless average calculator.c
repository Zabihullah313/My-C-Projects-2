#include <stdio.h>

int main ()
{
    int num;
    int sum = 0; //This initialization is so important.
    int counter = 0;// This initialization is so important.
    printf("%s","Enter -1 to end the loop and show the average.\n");

    while(5)
    {   printf("Enter a number :");
        scanf("%d", &num);

        if(num>=0)
        {
            sum = sum + num;
            counter = counter + 1;
        }
        else if(num==-1)
            break;
        else
            continue;
    }

    double average=(double )sum/counter;
    printf("The average number is = %.3lf",average);

}