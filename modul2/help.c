/*
    kenjeranLoop.c
    2022-09-28
    Denta Bramasta
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int day, month, year;
    scanf("%d %d %d", &month, &day, &year);
    int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // check for input validation
    if((days<1 || days>31) || (month<1 || month>12)) {
        return 0;
    }

    // Checking for lEAP YEAR
    if((year%100!=0 && year%4==0) || (year%100==0 && year%400==0)) {
        // February = 28;
        days[1]--;
    }

    int totalDays = 0;
    // Iterate each month until selected month index
    for(int i=0; i<month-1; i++) {
        // sum the totalDays with the days of the month
        totalDays += days[i];
        totalDays -= days[i] - day;
    }

    printf("%d", totalDays);

    return 0;
}