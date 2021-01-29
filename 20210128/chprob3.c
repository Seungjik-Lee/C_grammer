#include<stdio.h>

void main()
{
    int arr[10];
    int i, num;

    printf("총 10개의 숫자 입력\n");
 
    for(i=0; i<10; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
}