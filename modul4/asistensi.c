#include <stdio.h>


void change(int *a, int *b)
{
    *a = *a + 5;
    *b = *b + 5;
    printf("%d %d\n", *a, *b);
}

int main()
{
    int x = 10, y = 6;
    change(&x, &y);
    printf("%d %d\n", x, y);

    return 0;
}