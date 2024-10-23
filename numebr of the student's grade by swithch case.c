
#include "stdio.h"
int main ()
{
    int acoun=0;
    int bcoun=0;
    int ccoun=0;
    int dcoun=0;
    int fcoun=0;
    char  grade;

    printf("Enter your grade, ");
    printf("enter z to stop: ");

    while (5)
    {

        scanf("%c",&grade);

        if (grade=='z')
            break;
        switch (grade) {

            case 'a':
            case 'A':
                acoun++;
                break;

            case 'b':
            case 'B':
                bcoun++;
                break;

            case 'c':
            case'C':
                ccoun++;
                break;

            case 'd':
            case 'D':
                dcoun++;
                break;

            case 'f':
            case 'F':
                fcoun++;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                printf("Enter a valid grade letter:");
                break;
        }
    }
    printf("Your class has %d A garde.\n",acoun);
    printf("Your class has %d B grade.\n",bcoun);
    printf("Your class has %d C grade.\n",ccoun);
    printf("Your class has %d D grade.\n",dcoun);
    printf("Your class has %d F grade.\n",fcoun);
}