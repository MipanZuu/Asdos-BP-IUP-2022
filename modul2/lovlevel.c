/*
    lovlevel.c
    2022-10-05
    Denta Bramasta
*/

#include <stdio.h>

int main() {
    char str[101];
    int n;

    scanf("%d", &n);
    scanf("%s", str);

    // Iterate half of the string length times
    for(int i=0; i<=n/2; i++) {
        // Break if i is half of sting length & n is even
        if(i==n/2 && n%2==0) break;

        // Iteration for print the char
        for(int j=0; j<n; j++) {

            // PRINT THE CHAR IF THE INDEX J is i or strSize-i
            if(j==i || j==n-i-1) {
                printf("%c", str[j]);
            } else {
                printf(" "); // Otherwise Print space
            }
        }
        printf("\n");
    }

    return 0;
}