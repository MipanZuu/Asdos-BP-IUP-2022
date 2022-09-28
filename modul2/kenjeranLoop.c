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
    int frontCars, behindCars, time;
    scanf("%d %d %d", &frontCars, &behindCars, &time);
    int myCar = 1;

    // 25 for stop (red+yellow)
    while(time>25) {
        time -= 25;
        if (time > 0){
            int greenTime = (time-60>=0) ? 60 : time;
            time -= greenTime;
            for (int i = greenTime-5; i >= 0 ; i -= 5){
                if (frontCars > 0){
                    frontCars--;
                } else if(myCar == 1) {
                    myCar--;
                    printf("YES ");
                } else if (behindCars > 0){
                    behindCars--;
                } else if(behindCars == 0) {
                    printf("0");
                    return 0;
                }
            }
        }
        
        if (myCar == 1){
            printf("NO! ");
        }

        printf("%d", frontCars+myCar+behindCars);
    }

    return 0;
}