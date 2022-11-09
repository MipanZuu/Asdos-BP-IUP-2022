#include <stdio.h>

int main()
{
    int denta;
    int arr[5] = {1, 2, 3, 4, 5}, i;
    char *ptr = arr;
    // int -> int
    // int -> char: type casting

    for (i = 0; i < 5; ++i) {
        printf("%c ", *(ptr+i));
    }
    return 0;
}