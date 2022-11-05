 //
//  main.c
//  SpacedDiamond
//
//  Created by Ariel Pratama Menlolo on 18/10/22.
//

#include <stdio.h>

int main(void)
{
    int n,m;
    scanf("%d %d", &n, &m);
    getchar();
    char map[n][m];
    int bombs[n*m][2];
    int k = 0;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%c", &map[i][j]);
            if (map[i][j] == 'X' || map[i][j] == 'x')
            {
                bombs[k][0] = i;
                bombs[k++][1] = j;
            }
        }
        getchar();
    }

    for (int i = 0; i < k; i++)
    {
        for (int p = -1; p <= 1; p++)
        {
            for (int q = -1; q <= 1; q++)
            {
                if (bombs[i][0] + p >= 0 && bombs[i][0] + q <= n - 1 &&
                    bombs[i][1] + q >= 0 && bombs[i][1] + q <= m - 1 &&
                    !(p == 0 && q == 0))
                {
                    l++;
                }
            }
        }
    }
    printf("%d\n", l);
}