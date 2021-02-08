#include<stdio.h>

void main()
{
	int arr[10];
	int i, num;
	int a = 0, b = 9;

	printf("총 10개의 숫자 입력\n");

	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &num);

		if (num % 2 == 1)
			arr[a++] = num;
		else
			arr[b--] = num;
	}

	printf("배열 요소의 출력 : ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}

/*
void main()
{
    int arr[10];
    int *fip = &arr[0];
    int *eip = &arr[9];
    int i = 0;

    while(i<10)
    {
        int temp = 0;
        printf("총 10개의 숫자 입력 : ");
        scanf("%d", &temp);

        //홀수
        if(temp%2==1)
        {
            *fip = temp;
            fip = fip+1;
        }
        
        //짝수
        else
        {
            *eip = temp;
            eip = eip-1;
        }
        i++;
    }

    printf("\n");

    for(i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
}
*/
