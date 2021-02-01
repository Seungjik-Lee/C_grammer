#include <stdio.h>

void main()
{
    int arr[3][3];

    /*
    4 4 4
    4 4 4
    4 4 4    (4*9) / 4 = 9
    */

    int i = 0;
    int j = 0;

    //2차원 배열요소 입력받기
    for (i = 0; i < 3; i++) // sizeof(arr)/sizeof(int) : 전체크기에서 4를 나눔
    {
        for (j = 0; j < 3; j++)
        {
            printf("숫자 입력 :");
            scanf("%d", &arr[i][j]);
        }
    }

    //2차원 배열요소 출력하기
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("숫자 출력 : %d\n", arr[i][j]);
        }
    }
}