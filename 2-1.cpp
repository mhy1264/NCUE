#include <stdio.h>
#include <stdlib.h>

//翻轉矩陣
//matrix       : 矩陣
//currentIndex : 矩陣當前位置
//size         : 矩陣最大邊長
//size_x       : 矩陣 x 軸長度
//size_y       : 矩陣 y 軸長度
void TurnOver(int *matrix, int currentIndex, int size, int size_x, int size_y)
{
    int _currentIndex = 1 - currentIndex;
    int _i, _j;
    for (int i = 0; i < size_x; i++)
    {
        for (int j = 0; j < size_y; j++)
        {
            _i = size_x - i - 1;
            _j = j;

            *(matrix + _currentIndex * size * size + _i * size + _j) = 
            *(matrix + currentIndex * size * size + i * size + j);
        }
    }
}

//旋轉矩陣
//matrix       : 矩陣
//currentIndex : 矩陣當前位置
//size         : 矩陣最大邊長
//size_x       : 矩陣 x 軸長度
//size_y       : 矩陣 y 軸長度
void Rotate(int *matrix, int currentIndex, int size, int size_x, int size_y)
{
    int _currentIndex = 1 - currentIndex;
    int _i, _j;
    for (int i = 0; i < size_x; i++)
    {
        for (int j = 0; j < size_y; j++)
        {
            _i = j;
            _j = size_x - i - 1;

            *(matrix + _currentIndex * size * size + _i * size + _j) = 
            *(matrix + currentIndex * size * size + i * size + j);
        }
    }
}

int main(void)
{
    int r, c, m;
    scanf("%d %d %d", &r, &c, &m);

    //取得最大邊長
    int size = r > c ? r : c;
    int matrix[2][size][size];

    //當前矩陣位置
    int currentIndex = 0;

    //讀取矩陣
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[currentIndex][i][j]);
        }
    }

    //讀取操作
    int operate[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &operate[i]);
    }

    //操作矩陣
    for (int i = 0; i < m; i++)
    {
        if (operate[i] == 1)
        {
            //翻轉
            TurnOver(&matrix[0][0][0], currentIndex, size, r, c);
        }
        else
        {
            //旋轉
            Rotate(&matrix[0][0][0], currentIndex, size, r, c);
            //旋轉後對調邊長
            r = r ^ c;
            c = r ^ c;
            r = r ^ c;
        }
        //切換當前矩陣
        currentIndex = 1 - currentIndex;
    }

    //印出結果
    printf("%d %d\n", r, c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", matrix[currentIndex][i][j]);
            if (j < c - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
