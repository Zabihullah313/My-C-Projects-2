#include "stdio.h"
#include <string.h>
#include <ctype.h>

int main() {
    FILE *fp;
    fp = fopen("c:\\texttt.txt", "a+");
    if(fp == NULL){
        printf("Cannot open file\n");
        return -1;
    }
}