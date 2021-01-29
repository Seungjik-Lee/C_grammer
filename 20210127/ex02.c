/*
2. 2의 n승을 구하는 함수를 재귀적으로 구현해보자. 그리고 그에 따른 
적절한 main 함수도 구현해보자. 참고로 재귀 함수의 구현이
처음에는 어려운 편이기 때문에 여기서는 쉬운 문제를 제시한다.

....예시 
정수 입력: 8
2의 8승은 256
....
*/

#include <stdio.h>

int Square(int num, int result)
{
    if (num == 0)
        return result;

    result *= 2;
    Square(num - 1, result);
}

int main(void)
{
    int x;

    printf("정수 입력 : ");
    scanf("%d", &x);

    printf("2의 %d승은 %d \n", x, Square(x, 1));
}

