#include<stdio.h>

void main()
{
    int arr[6] = {1,2,3,4,5,6};
    int *ptr = &arr[0];
    int *reptr = &arr[5];
    int i, temp;

    for(i=0; i<3 ; i++)
    {
        temp = *ptr;
        *ptr = *reptr;
        *reptr = temp;
        *ptr++;
        *reptr--;
    }

    for(i=0; i<6; i++)
    {
        printf("%d \n", arr[i]);
    }

}

//-----------------------------------------------------
/*
void main()
{
    int arr[6] = {1,2,3,4,5,6};
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[5];
    int temp;
    int i;

    for(;i<3; i++) // 바꾸는 for 구문
    {
    // swap 기법
        temp = *(ptr1+i); // arr[0]를 temp에 담아라
        *(ptr1+i) = *(ptr2-i);
        *(ptr2-i) = temp;
    }

    for(i=0; i<6; i++)
    {
       printf("arr[%d] = %d \n", i, arr[i]);
    }
    
}
*/