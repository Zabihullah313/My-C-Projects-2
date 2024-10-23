#include <stdio.h>
int main(){
    int space=4;
    int temp=1;
    for (int i = 1; i <=5 ; ++i) {
        for (int j = 1; j <=space ; ++j) {
            printf(" ");
        }
        for (int k = 1; k <= temp; ++k) {
            printf("*");
        }
        puts("");
        temp+=2;
        space-=1;
    }


    int temp2=7;
    int space2=1;
    for (int i = 1; i <=4; ++i) {
        for (int j = 1; j <=space2 ; ++j) {
            printf(" ");
        }
        for (int k = 1; k <=temp2; ++k) {
            printf("*");
        }
        puts("");
        temp2-=2;
        space2+=1;
    }

}