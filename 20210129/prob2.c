#include <stdio.h>

void main()
{
    int i, j;
    int Aarr[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    int Barr[4][2];

    for (i = 0; i < 2; i++)
    {
        printf("\n");

        for (j = 0; j < 4; j++)
        {
            printf("%d", Aarr[i][j]);
        }
    }

    printf("\n\n");

    for (j = 0; j < 4; j++)
    {
        printf("\n");
        for (i = 0; i < 2; i++)
        {
        Barr[j][i] = Aarr[i][j];

        printf("%d ", Barr[j][i]);
        }
    }
}