#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int arr[10][10], dis[10][10], vis[10][10], n;
    int brow, bcol, erow, ecol;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 3)
            {
                brow = i;
                bcol = j;
            }
            if (arr[i][j] == 2)
            {
                erow = i;
                ecol = j;
            }

            if (arr[i][j] != 1)
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
            dis[i][j] = INT_MAX;
            vis[i][j] = 0;
        }


    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d", arr[i][j]);
        printf("\n");
    }



    dis[brow][bcol] = 0;
    for (int k = 0; k < n * n - 1; k++)
    {
        int min_dis = INT_MAX;
        int min_row = -1, min_col = -1;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (!vis[i][j] && dis[i][j] < min_dis)
                {
                    min_dis = dis[i][j];
                    min_row = i;
                    min_col = j;
                }
        vis[min_row][min_col] = 1;
        int row_off[] = { -1, 0, 1, 0 };
        int col_off[] = { 0, 1, 0, -1 };
        for (int i = 0; i < 4; i++)
        {
            int adj_row = min_row + row_off[i];
            int adj_col = min_col + col_off[i];
            if ((adj_row >= 0 && adj_row < n && adj_col >= 0 && adj_col < n)
                && !vis[adj_row][adj_col]
                && arr[adj_row][adj_col] == 1)
            {
                int dis_upd = dis[min_row][min_col] + 1;
                if (dis_upd < dis[adj_row][adj_col])
                    dis[adj_row][adj_col] = dis_upd;
            }
        }
    }
    if (dis[erow][ecol] == INT_MAX)
        printf("Cikica ce ostati gladan");
    else
        printf("%d", dis[erow][ecol]);
    return 0;
}
