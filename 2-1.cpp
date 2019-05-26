#include <stdio.h>
#include <stdlib.h>

//½��x�}
//matrix       : �x�}
//currentIndex : �x�}��e��m
//size         : �x�}�̤j���
//size_x       : �x�} x �b����
//size_y       : �x�} y �b����
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

//����x�}
//matrix       : �x�}
//currentIndex : �x�}��e��m
//size         : �x�}�̤j���
//size_x       : �x�} x �b����
//size_y       : �x�} y �b����
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

    //���o�̤j���
    int size = r > c ? r : c;
    int matrix[2][size][size];

    //��e�x�}��m
    int currentIndex = 0;

    //Ū���x�}
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[currentIndex][i][j]);
        }
    }

    //Ū���ާ@
    int operate[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &operate[i]);
    }

    //�ާ@�x�}
    for (int i = 0; i < m; i++)
    {
        if (operate[i] == 1)
        {
            //½��
            TurnOver(&matrix[0][0][0], currentIndex, size, r, c);
        }
        else
        {
            //����
            Rotate(&matrix[0][0][0], currentIndex, size, r, c);
            //����������
            r = r ^ c;
            c = r ^ c;
            r = r ^ c;
        }
        //������e�x�}
        currentIndex = 1 - currentIndex;
    }

    //�L�X���G
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
