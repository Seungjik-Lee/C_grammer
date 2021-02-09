#include <stdio.h>

void main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            printf("%-3d", arr[i][j]);
        }
    }

    printf("\n");
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            printf("%-3d ", arr[3 - j][i]);
        }
    }

    printf("\n");
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            printf("%-3d ", arr[3 - i][3 - j]);
        }
    }

    printf("\n");
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            printf("%-3d ", arr[j][3 - i]);
        }
    }
}

// void doPrint(int (*p)[4]);
// void doChage(int (*arr)[4], int (*brr)[4] );
// void main(){
//     int arr[4][4] = {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},
//         {13,14,15,16}
//     };
//     int brr[4][4];
    
//     printf("========arr==========\n");
//     doPrint(arr);

//     doChage(arr,brr);

//     printf("========brr==========\n");
//     doPrint(brr);

//     doChage(brr,arr);

//     printf("========arr==========\n");
//     doPrint(arr);

//     doChage(arr,brr);

//     printf("========brr==========\n");
//     doPrint(brr);

// }

// void doChage(int (*arr)[4], int (*brr)[4]){
//     int k = 3;
//     for(int i =0; i<4;i++){
//         for(int j=0; j<4;j++){
//             brr[j][k] = arr[i][j];
//         }
//         k--;
//     }
// }
// // 출력하는 함수
// void doPrint(int (*p)[4]){
//     for(int i =0; i<4;i++){
//         for(int j=0; j<4;j++){
//             printf("%d\t",p[i][j]);
//         }
//         printf("\n");
//     }
// }