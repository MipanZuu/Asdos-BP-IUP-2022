/*
    ttt.c
    2022-09-28
    Denta Bramasta
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int date, month, year;
    scanf("%d %d %d", &date, &month, &year);
    if (year%4 == 0){
        printf("it is a leap year");
    }
    else if (date>31 || month>12 || year>2080 || date<1 || month<1 || year<1){
        printf("invalid date or month!");
    }
    else if(date>28 && month == 2){
        printf("invalid date or month!");
    }
    else if(date>31 && month == 4){
        printf("invalid date or month!");
    }
    else if(date>31 && month == 7){
        
    }
    else if(date)
        return 0;
}