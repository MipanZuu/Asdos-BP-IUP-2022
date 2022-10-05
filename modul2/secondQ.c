/*
    secondQ.c
    2022-10-05
    Denta Bramasta
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n, count = 0, index;
    int check[100] = {false};
    int box[100] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &box[i]);
        // printf("box=%d ", box[i]);
    }
    for (int j = 0; j < n; j++)
    {
        index = j;
        if (check[j]==false)
        {
            count++;
        }
        
        while (check[index] == false)
        {
            check[index] = true;
            index = box[index];
        }
        
    }
    printf("%d \n", count);
    
    return 0;
}