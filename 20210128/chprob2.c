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

