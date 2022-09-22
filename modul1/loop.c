/*
    loop.c
    2022-09-21
    Denta Bramasta
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    long long int
    num1, num2, num3, num4, num5, res1, res2, res3;

    scanf("%lli %lli %lli %lli %lli", &num1, &num2, &num3, &num4, &num5);

    for (int i = 1; i <= 3; i++)
    {
        long long int
        counter = -1, number = -1;

        if (num1 > counter)
        {
            counter = num1;
            number = 1;
        }
        if (num2 > counter)
        {
            counter = num2;
            number = 2;
        }
        if (num3 > counter)
        {
            counter = num3;
            number = 3;
        }
        if (num4 > counter)
        {
            counter = num1;
            number = 4;
        }if (num5 > counter)
        {
            counter = num5;
            number = 5;
        }

        switch (number)
        {
            case 1:
                num1 = -1;
                break;
            case 2:
                num2 = -1;
                break;
            case 3:
                num3 = -1;
                break;
            case 4:
                num4 = -1;
                break;
            case 5:
                num5 = -1;
                break;
        }

        print("%lli %lli\n", number, counter);
    }

    return 0;
}