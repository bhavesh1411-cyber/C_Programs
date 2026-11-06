#include <stdio.h>

int main()
{
    int arry[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value arry[%d][%d]\n", i, j);
            scanf("%d", &arry[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",arry[i][j]);
        }
        printf("\n");
    }

    return 0;
}