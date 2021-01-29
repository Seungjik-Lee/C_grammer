#include<stdio.h>

void doA()
{
    char * strArr[3] = {"aaa", "bbb", "ccc"};

    printf("strArr[0] = %d \n", strArr[0]);
    printf("strArr[1] = %d \n", strArr[1]);
    printf("strArr[2] = %d \n", strArr[2]);

    printf("\n");

    printf("*strArr[0] = %s \n", strArr[0]);
    printf("*strArr[1] = %s \n", strArr[1]);
    printf("*strArr[2] = %s \n", strArr[2]);
}

void main()
{
    doA();
}