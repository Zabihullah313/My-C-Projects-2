#include <stdio.h>

float calculate_charges(int car_plate,float hours);
int main(void) {

    int plate;
    float Tot_hours=0;
    float hours;
    float t_charge=0;
    printf("%-10s%-10s%-10s\n","Car","Hours","Charges");
    for (int i = 1; i <= 3; ++i) {
        printf("Enter your car Number Plate:");
        scanf("%d", &plate);
        printf("Enter Hours of Parking:");
        scanf("%f", &hours);
        t_charge=t_charge+calculate_charges(plate, hours);
        Tot_hours=Tot_hours+hours;
    }
    printf("%-10s%-10f%-10f","Total",Tot_hours,t_charge);

}
float calculate_charges(int car_plate,float hours){
    float ex_hour;
    float charges;
    float tot_charges=0;
    if (hours>3){
        ex_hour=hours-3;
        hours=3;
        charges=hours*2+ex_hour;
        tot_charges=tot_charges+charges;
    }
    else {
        charges = hours * 2;
        tot_charges = tot_charges + charges;
    }
    printf("%-10d%-10f%-10f\n",car_plate,hours,charges);
    return tot_charges;
}