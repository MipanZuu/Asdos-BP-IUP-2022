#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void go_fibonacci(int number, int counter, int t1, int t2, char word[1001], int mode);

int main()
{
    int t, j, k ;
    int key_word[15], fibo_number[15];
    char m[15][1001];
    int condition = 0;
    scanf("%d", &t);
    if ((t >= 1) && (t <= 15))
    {
        for (k = 1; k <= t; k++)
        {
            // key_word pake array
            scanf("%d", &key_word[k]);
            if ((key_word[k] >= 0 ) && (key_word[k] <= 1))
            {
                // fibo_number pake array
                scanf("%d", &fibo_number[k]);
                scanf(" %[^\n]s", m[k]);
            }
            else
            {
                printf("Mode is not valid!\n");
                condition = 1;
                break;
            }
        }
        if (condition == 0)
        {
            for (j = 1; j <= t; j++)
                {
                    go_fibonacci(fibo_number[j], 3, 1, 1, m[j], key_word[j]);
                    printf("\n");
                }
        }
    }
    else
    {
        printf("Mode is not valid!\n");
    }
    return 0;
}

void go_fibonacci(int number, int counter, int t1, int t2, char word[1001], int mode)
{
    int nextTerm, WordLength, k, AddNum, ascii;
    int num_result;

    if (number == 1)
    {
        printf("%d ", t1);
    }
     if (number == 2)
    {
        printf("%d ", t2);
    }

    if ((number >= 3) && (number >= counter))
        {
            nextTerm = t1 + t2 ;
            t1 = t2;
            t2 = nextTerm;
            
            go_fibonacci(number, counter+1, t1, t2, word, mode);
        }
if (number == counter)
{
    WordLength = strlen(word);

    AddNum = nextTerm % 26;
    for( k=0 ; k < WordLength; k++)
    {
        ascii = (int) word[k];
        if (ascii != 32)
        {
            if (mode == 0)
            {
                num_result = ascii + AddNum;
                if (num_result > 122)
                {
                    num_result = num_result - 26;
                }
                if (num_result < 97)
                {
                    num_result = num_result + 26;
                }
            }
            else
            {
                num_result = ascii - AddNum;
                if (num_result > 122)
                {
                    num_result = num_result - 26;
                }
                if (num_result < 97)
                {
                    num_result = num_result + 26;
                }
  
            }
        }
        printf("%c", num_result);
    }

}
}

