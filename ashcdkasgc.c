/*
    modul3.c
    2022-10-13
    Denta Bramasta
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

 int factorial(int n) {
    if (n == 0){
        return 1;
    }

    return n * factorial(n-1);
 }

int fibbonaci(int n) {
   if (n < 3) {
     return 1;
   }

   return fibbonaci(n-1) + fibbonaci(n-2);     // calls itself
}

int n = 10;
int main() {
    return 0;
}
 
int sum(int a, int b)
{
    int result = a;
    result += b;
    return result;
}