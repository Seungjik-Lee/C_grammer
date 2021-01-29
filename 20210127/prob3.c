#include<stdio.h>

void main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[4];
    int sum = 0;
    int i;

    for(i=0; i<5; i++)
    {
        sum += *(ptr--);
    }

    printf("sum : %d \n", sum);

}