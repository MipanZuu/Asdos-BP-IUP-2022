#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <limits.h>

int main()
{
    int n, a = 0;

    scanf("%d", &n);

        // increasing portion of the pattern
        for (int i = 1; i <= n + 1; i++)
        { // 

                // print space
                for (int j = i; j <= n; j++)
                {
                    printf("  ");
                }

                // print digit
                for (int k = 1; k <= 2 * i - 1; k++)
                {
                    if (k < i)
                        printf("%d ", a++);
                    else if (k == i)
                        printf("%d ", a);
                    else
                        printf("%d ", --a);
                }

                // print space
                for (int j = i; j <= n; j++)
                {
                    printf("  ");
                }
            // new line
            printf("\n");
        }

        // decreasing portion of the pattern
        for (int i = n; i >= 1; i--)
        {

                // print space
                for (int j = n; j >= i; j--)
                {
                    printf("  ");
                }

                // print digit
                for (int k = 1; k <= 2 * i - 1; k++)
                {
                    if (k < i)
                        printf("%d ", a++);
                    else if (k == i)
                        printf("%d ", a);
                    else
                        printf("%d ", --a);
                }

                // print space
                for (int j = n; j >= i; j--)
                {
                    printf("  ");
                }

            // new line
            printf("\n");
        }

    return 0;
}