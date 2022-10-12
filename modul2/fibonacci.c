/*
    fibonacci.c
    2022-10-12
    Denta Bramasta
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int arr[1000] = {0};

void initFibo(int fibo1){
    arr[1] = 1;
    for (int i = 2; i < fibo1; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
}

int fibonacci (int index){
    if (index <= 1) return index;
    // return fibonacci(index-1)+ fibonacci(index-2);
    return arr[index];
}

int main() {
    int test = 1000;
    int result = fibonacci(test);
    printf("%d\n", result);
    return 0;
}