#include<stdio.h>

void main()
{
    int a = 10;
    int *p = &a;
    int **pp = &p;

    printf("a = %d \n", a);
    printf("&a = %d \n", &a);

    printf("\n");
    printf("p = %d \n", p);
    printf("*p = %d \n", *p);
    printf("&p = %d \n", &p);

    printf("\n");
    printf("pp = %d \n", pp);
    printf("*pp = %d \n", *p);
    printf("**p = %d \n", **pp);
    printf("&pp = %d \n", &pp);
    
}