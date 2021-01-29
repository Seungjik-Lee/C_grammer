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
}
