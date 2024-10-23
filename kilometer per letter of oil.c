#include <stdio.h>
int main (){
    float dis=0,oil;

    while(7)
    {   printf("Enter distance in kilometer and letters of oil \n Enter -1 to end;");
        scanf("%f",&dis);
        if (dis==-1)
            break;
        scanf("%f",&oil);
        printf("The kilometers per letter is %.2f\n",dis/oil);

    }
}