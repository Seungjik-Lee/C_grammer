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

	printf("배열 요소에 저장된 값의 합 : %d \n", sum);

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
		printf("배열의 요소 입력 : ");
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	printf("배열 요소에 저장된 값의 합 : %d \n", sum);

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

	printf("배열 요소에 저장된 값의 합 : %d \n", sum);

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

	printf("배열 arr1의 크기 : %d \n", sizeof(arr1));
	printf("배열 arr2의 크기 : %d \n", sizeof(arr2));
	printf("배열 arr3의 크기 : %d \n", sizeof(arr3));

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

//---------------------------------------------------문제 11-1
/*
int main(void)
{
	int arr[5];
	int max = -9999, min = 9999;
	int sum = 0, i;

	printf("배열의 요소 입력 : ");

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

	printf("최대값 : %d \n", max);
	printf("최소값 : %d \n", min);
	printf("입력된 정수의 합 : %d \n", sum);

	return 0;
}
*/

//---------------------------------------------------문제 11-2
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
	printf("배열 str의 크기: %d \n", sizeof(str));
	printf("NULL 문자 문자형 출력: %c \n", str[13]);
	printf("NULL 문자 문자형 출력: %d \n", str[13]);

	str[12] = '?';
	printf("문자열 출력: %s \n", str);
	
	return 0;
}
*/

/*
int main(void)
{
	char str[50];
	int idx = 0;

	printf("문자열 입력:");
	scanf("%s", str);
	printf("입력 받은 문자열: %s \n", str);

	printf("문자 단위 출력: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}

	printf("\n");

	return 0;
}
*/

//----------------------------------------------------------문제1
/*
성적 관리
사람 : 철수 철희 영수 영희
과목 : 국, 영, 수, 사, 과
*/

int main(void)
{
	int arr[5][6] = { 0 };
	int i, j;
	int tot, sum = 0;
	double avg;

	printf("성적 입력 : \n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\n");

	printf("    국  영   수   사   과  총점\n");

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

	printf("과목별 평균\n");

	for (i = 0; i < 4; i++)
	{
		tot = 0;
		for (j = 0; j < 5; j++)
		{
			tot += arr[i][j];
		}
		avg = tot / 5.0;
		printf(" 평균 : %lf \n", avg);
	}
	return 0;
}