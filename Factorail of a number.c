#include <stdio.h>

  int main(){
    long long int n,i=1,result=1;
    printf("Enter a number to be factorialized : ");
    scanf("%lli",&n);
    while (n>=i){
        result=result*n;
        n=n-1;
    }
      printf("factorial is equal to %lli",result);
      return 0;


}