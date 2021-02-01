#include<stdio.h>

void main()
{
    int Ten;
    int binary[10] = {0, };
    int position = 0;
    int i = 0;

    printf("10진수 정수 입력: ");
    scanf("%d", &Ten);

    while(1)
    {
        binary[position] = Ten % 2;
        Ten = Ten / 2;

        position++;

        if(Ten == 0)
          break;
    }
    
    for(i = position - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
}

/*
void main()
{
    int arr[100];
    int cnt = 0;
    int input_number = 0;
    int rema_number = 0;

    printf("정수 입력 :");
    scanf("%d", &input_number);

    while(input_number > 1)
    {
        rema_number = input_number % 2;

        arr[cnt] = rema_number;
        cnt++;

        int temp_value = input_number/2;
        
        if(temp_value<2)
        {
            arr[cnt] = temp_value;
            cnt++;

            break;
        }
        input_number = temp_value;
    }

    int i = 0;
    for(i=cnt-1; i>-1; i--)
    {
        printf("%d", arr[i]);
    }
}
*/
