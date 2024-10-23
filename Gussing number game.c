#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int n;
    start:
    printf("Guess a number between 1 to 1000 :");
    scanf("%d",&n);
    srand(n);
    int random =1+rand()%1000;
    char play;
    while(1){
        if(n>random)
            printf("Too High! Try again.");

        else if (n==random) {
            printf("Excellent! You win!");
            break;
        }
        else
            printf("Too Low! Try again!");

        scanf("%d",&n);

    }

}
