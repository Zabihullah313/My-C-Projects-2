#include <stdio.h>
int main(void)
{
    for (int i=1;i<=1000;i++){
        for (int j = 1; j <=1000 ; j++) {
            for (int k = 1; k <=1000 ; k++) {
                if((i*i==j*j+k*k)||(j*j==i*i+k*k)||(k*k==j*j+i*i))
                    printf("%d,%d,%d\n",i,j,k);

            }
        }
    }
}