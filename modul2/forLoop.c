/*
    forLoop.c
    2022-10-05
    Denta Bramasta
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int count = 10;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("*");
        }
    }
    return 0;
}