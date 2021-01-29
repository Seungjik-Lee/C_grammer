#include <stdio.h>

void odd_num(int *ptr)
{
    int i = 0;
    printf("\n");
    printf("홀수 출력 : ");

    for (i = 0; i < 10; i++)
    {
        if (ptr[i] % 2 != 0)
        {
            printf("%d ", ptr[i]);
        }
    }
}

void even_num(int *ptr)
{
    int i = 0;
    printf("\n");
    printf("짝수 출력 : ");

    for (i = 0; i < 10; i++)
    {
        if (ptr[i] % 2 == 0)
        {
            printf("%d ", ptr[i]);
        }
    }
}

void main()
{
    int arr[10];
    int i, num;

    printf("총 10개의 숫자 입력\n");

    for (i = 0; i < 10; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }

    odd_num(arr);

    even_num(arr);
}