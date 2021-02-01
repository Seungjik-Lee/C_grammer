#include<stdio.h>

void doA(int a)
{
    printf("doA() start\n\n a = %d \n", a);
    a = 20;
    printf(" a = %d \n\ndoA() end \n", a);
}

void doB(int *b)
{
    printf("b(b의 첫 번째 배열 주소값) = %d \n", b);
    printf("*b(b의 첫 번째 배열 주소에 저장된 값) = %d \n", *b);
    *b = 10;
    *(b+1) = 20;

    int i = 0;
    for(i=0; i<10; i++)
    {
        printf("*(b+%d) = %d \n", i, *(b+i));
    }
}

int doC()
{
    int a;
    a = 20;
    return a * a;
}

void main()
{
    int i = 0;
    int a = 10;
    int b[10]={1,2,3,4,5,6,7,8,9,10};

    doA(a);

    printf("\n");
    printf("main a = %d \n", a);
    printf("\n");

    doB(b); //doB(&b[0])
    
    for(i=0; i<10; i++)
    {
        printf("*(b+%d) = %d \n", i, *(b+i));
    }
    
    printf("a = %d \n", a);

    a = doC();

    printf("a = %d \n", a);

    doC();
}