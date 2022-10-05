/*
    pattern.c
    2022-10-05
    Denta Bramasta
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
// n = 3;
// i = 3;
// i + 1;
// 2 + 1 = 3;
    for (int i = 1; i <= n; i++) {  // 1 -> 3
        for (int j = 1; j <= i; j++) {    
            printf("*");
        }
        printf("\n");
    }

    /*
    output :
            *

    */

    // for (int i = n-1; i > 0; i--) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    return 0;
}