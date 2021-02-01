#include<stdio.h>

void main()
{
    int arr[5][5];
    int grade;
    int i, j;

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("점수 : ");
            scanf("%d", &arr[i][j]);
        }
    }

        for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            arr[i][4] += arr[i][j];
            arr[4][i] += arr[j][i];
        }
        arr[4][4] += arr[i][j];
    }
}