#include<stdio.h>

int SquareByValue(int num)
{
    return num*num;
}

void SquareByReference(int * ptr)
{
    int num = *ptr;
    *ptr = num*num;
}

int main()
{
    int num = 10;
    printf("%d \n", SquareByValue(num));
    SquareByReference(&num);
    printf("%d \n", num);
}