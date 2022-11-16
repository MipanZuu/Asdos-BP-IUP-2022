/*
    samuel.c
    2022-11-05
    Denta Bramasta
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n, total;
    scanf("%d", &n);
    total=(n*2)+1;
    for (int i = 0; i < (n*2); i++)
    {
        int digit = 0;
        for (int j = 0; j < (i*2); j++)
        {
            if (i==0)
            {
                printf("%d", digit);
            }
            else if (j <= i)
            {
                printf("%d", digit);
                digit++;
            }
            else if (j > i)
            {
                digit--;
                if (j == (i*2))
                {
                    printf("%d", digit);
                }
                else{
                    printf("%d", digit);
                }
            }
            printf("\n");
            
            
            
        }
        
    }
    
    return 0;
}