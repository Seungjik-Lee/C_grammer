#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


/*
int main(void)
{
	int arr[5];
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	for (i = 0; i < 5; i++)
		sum += arr[i];

	printf("�迭 ��ҿ� ����� ���� �� : %d \n", sum);

	return 0;
}
*/

/*
int main(void)
{
	int arr[5];
	int sum = 0, i;

	for (i = 0; i < 5; i++)
	{
		printf("�迭�� ��� �Է� : ");
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	printf("�迭 ��ҿ� ����� ���� �� : %d \n", sum);

	return 0;
}
*/

/*
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int sum = 0, i = 0;

	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}

	printf("�迭 ��ҿ� ����� ���� �� : %d \n", sum);

	return 0;
}
*/

/*
int main(void)
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr3[5] = { 1, 2 };
	int ar1Len, ar2Len, ar3Len, i;

	printf("�迭 arr1�� ũ�� : %d \n", sizeof(arr1));
	printf("�迭 arr2�� ũ�� : %d \n", sizeof(arr2));
	printf("�迭 arr3�� ũ�� : %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int);
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1Len; i++)
		printf("%d ", arr1[i]);
	printf("\n");

	for (i = 0; i < ar2Len; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	for (i = 0; i < ar3Len; i++)
		printf("%d ", arr3[i]);
	printf("\n");

	return 0;
}
*/

//---------------------------------------------------���� 11-1
/*
int main(void)
{
	int arr[5];
	int max = -9999, min = 9999;
	int sum = 0, i;

	printf("�迭�� ��� �Է� : ");

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);

		if (max <= arr[i])
		{
			max = arr[i];
		}
		if (min >= arr[i])
		{
			min = arr[i];
		}

		sum += arr[i];
	}

	printf("�ִ밪 : %d \n", max);
	printf("�ּҰ� : %d \n", min);
	printf("�Էµ� ������ �� : %d \n", sum);

	return 0;
}
*/

//---------------------------------------------------���� 11-2
/*
int main(void)
{
	char arr[] = "Good time";
	int i;
	int arLen;

	arLen = sizeof(arr) / sizeof(char);

	for (i = 0; i < arLen; i++)
		printf("%c", arr[i]);

	return 0;
}
*/

/*
int main(void)
{
	char str[] = "Good morning!";
	printf("�迭 str�� ũ��: %d \n", sizeof(str));
	printf("NULL ���� ������ ���: %c \n", str[13]);
	printf("NULL ���� ������ ���: %d \n", str[13]);

	str[12] = '?';
	printf("���ڿ� ���: %s \n", str);
	
	return 0;
}
*/

/*
int main(void)
{
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է�:");
	scanf("%s", str);
	printf("�Է� ���� ���ڿ�: %s \n", str);

	printf("���� ���� ���: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}

	printf("\n");

	return 0;
}
*/

//----------------------------------------------------------����1
/*
���� ����
��� : ö�� ö�� ���� ����
���� : ��, ��, ��, ��, ��
*/

int main(void)
{
	int arr[5][6] = { 0 };
	int i, j;
	int tot, sum = 0;
	double avg;

	printf("���� �Է� : \n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\n");

	printf("    ��  ��   ��   ��   ��  ����\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			arr[i][5] += arr[i][j];
			arr[4][j] += arr[i][j];
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	printf("���� ���\n");

	for (i = 0; i < 4; i++)
	{
		tot = 0;
		for (j = 0; j < 5; j++)
		{
			tot += arr[i][j];
		}
		avg = tot / 5.0;
		printf(" ��� : %lf \n", avg);
	}
	return 0;
}