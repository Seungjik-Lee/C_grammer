#include <stdio.h>

int doA(int a)
{
    printf("doA 함수. a=%d \n", a);
}

int doB(int a, int b)
{
    printf("doB 함수. a = %d, b = %d \n", a, b);
}

void main()
{
    int (*a)(int);
    int (*b)(int, int);

    a = doA;
    b = doB;

    a(10);
    b(20, 30);
}