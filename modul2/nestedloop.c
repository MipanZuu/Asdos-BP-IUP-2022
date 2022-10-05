/*
    nestedloop.c
    2022-10-05
    Denta Bramasta
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define INT_MAX 10000

int main() {
    int n, m;
    char words[INT_MAX];
    char int_toString[100];
    // char out[100];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // decalre string as null value
        words[i];
        scanf("%d", &m);
        int sum = 0;
        for (int j = 1; j <= m; j++)
        {
            sum += pow(j, 3); 
            // itoa(j, int_toString, 10);
            sprintf(int_toString, "%d", j);
            strcat(words, int_toString);
            strcat(words, "^3");
            if (j != m) strcat(words, "+");
        }
        printf("%s = %d\n", words, sum);
    }
    return 0;
}