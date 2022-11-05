/*
    pointer.c
    2022-11-03
    Denta Bramasta
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int a = 10, c;
    int *b = &a;
    printf("%p\n", b); //print the memory address
    printf("%d\n", *b); //print the value
    return 0;
}