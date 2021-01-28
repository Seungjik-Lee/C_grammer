#include<stdio.h>

void main()
{
    int a = 10;
    int *b = &a;

    printf("a = %d \n", a);
    printf("*b = %d \n", *b);

    *b = 20;
    printf("a = %d \n", a);
    printf("*b = %d \n", *b);

    int c = 20;
    b = &c;

}