#include <stdio.h>
int fact(int n){
    int res=1;
    for (int i=1;i<=n;i++){
        res=res*i;
    }
    return res;
}
int main(void) {
    double e = 1;
    for (int i = 1; i <= 20; i++) {
        e = e + 1.0 / fact(i);

    }

    printf("%lf",e);
}