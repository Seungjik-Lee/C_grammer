#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j;

    srand((int)time(NULL));

    for (i = 1; i < 3; i++)
        printf("주사위 %d의 결과 : %d \n", i, (rand() % 6) + 1);
}