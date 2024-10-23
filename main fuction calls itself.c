#include <stdio.h>

int main() {


    // static will cause to be seemed in all calls otherwise it prints 2 each time.
    static int p=1;
    p++;
    printf("Inside main function: %d\n",p);
    main();


    return 0;
}
