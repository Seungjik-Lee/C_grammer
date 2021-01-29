#include<stdio.h>

void main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    int i;

    for(i=0; i<5; i++)
    {
        *(ptr) +=2;
        printf("%d \n", *ptr);
    }
    ptr++;
}

//-------------------------------------------------------------
/*
void main()
{
    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    //int *p;
    //p = arr;
    int i = 0;

    for(i=0; i<5; i++) //여기서 배열요소의 값을 각각 2씩 증가시켜 대입
    {
        p[i] = p[i]+2;
        //*(p+i) = *(p+i)+2;
        //*(p+i) += 2;
    }

    for(i=0; i<5; i++) // 다시 확인 하는 곳
    {
        printf("p[%d] = %d \n", i, p[i]);
        //printf("*(p+%d) = %d \n", i, *(p+i));
    }

}
*/