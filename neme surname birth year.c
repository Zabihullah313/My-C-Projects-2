#include <stdio.h>
int main(){
    int year;
    char name[50];
    char surname[50];
    printf("Enter your name :");
    scanf("%s",name);
    printf("Enter your surname :");
    scanf("%s",surname);
    printf("Enter your birth year :");
    scanf("%d",&year);
    printf("%s %s %d",name,surname,year);
    return 0;
}