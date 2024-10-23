#include <stdio.h>
int isec ,sec , min , hour, h1,day,h5;
int main(){
    printf("Input the number of seconds : ");
    scanf("%d",&isec);
    day=isec/86400;
    h5=isec-day*86400;
    hour = h5/3600;
    h1 = isec-day*86400 - hour *3600;
    min= h1/60;
    sec=isec -day*86400-hour*3600-min*60;
    printf("%d seconds is equal to %d day(s), %d hour(s) , %d minute(s) , %d second(s)",isec,day,hour,min,sec);
    return 0;
}
