/*
    cardsLooping.c
    2022-09-28
    Denta Bramasta
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int cards, i1, i2;
    int cardsArr[100];

    scanf("%d %d %d", cards, &i1, &i2);

    int n = 0;
    while (cards > 0) {
        cardsArr[n] = cards % 10;
        cards = cards / 10;
        n++;
    }

    printf("%d %d\n", cardsArr[i1 - 1], cardsArr[i2 - 1]);
     
    return 0;
}