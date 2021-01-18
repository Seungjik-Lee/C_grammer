#include <stdio.h>

//----------------------------------------------------------------------------- 반복문
/*
int main(void)
{
	int num = 0;

	while (num < 5)
	{
		printf("Hello World! %d \n", num);
		num++;
	}

	return 0;
}
*/

/*
int main(void)
{
	int num = 1;

	while (num < 6)
	{
		printf("%d번째 apple \n",num++);
	}
	
	num = 1;
	printf("\n");

	while (num < 4)
	{
		printf("%d번째 banana \n", num++);
	}

	num = 1;
	printf("\n");

	while (num < 11)
	{
		printf("%d번째 coffee \n", num++);
	}

	return 0;
}
*/

/*
int main(void)
{
	int dan = 0;
	int num = 1;

	printf("몇 단?");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%d * %d = %d \n", dan, num, dan*num);
		num++;
	}

	return 0;
}
*/

/*
int main(void)
{
	int cur = 2;
	int is = 0;

	while (cur < 10)
	{
		is = 1;
		while (is < 10)
		{
			printf(" %d * %d = %-4d", cur, is, cur * is);  //%d \t
			is++;
		}

		printf("\n");
		cur++;
	}

	return 0;
}
*/

/*
int main(void)
{
	int cur = 1, is = 1;
	int i = 1;

	printf("단 : ");
	scanf_s("%d", &cur);

	printf("곱할 범위 : ");
	scanf_s("%d", &is);

	while (i <= is)
	{
		printf("%d * %d = %d \n", cur, i, cur * i);
		i++;
	}

	return 0;
}
*/

//-------------------------------------------------------------------------------문제7-1
/*
int main(void)
{
	int num1;
	int i = 0;

	printf("양의 정수 : ");
	scanf_s("%d", &num1);

	while (i <= num1)
	{
		printf("Hello World! \n");
		i++;
	}

	return 0;
}
*/

//-------------------------------------------------------------------------------문제7-2
/*
int main(void)
{
	int num1 = 0;
	int num2 = 0;

	printf("양의 정수 : ");
	scanf_s("%d", &num1);

	while (num2++ < num1)
	{
		printf("%d\n", 3*num2);
	}

	return 0;
}
*/

/*
int main(void)
{
	int total = 0, num = 0;

	do
	{
		total += num;
		num = num + 2;
		printf("%d \n", num);
	} while (num <= 100);

		printf("짝수의 합계 : %d \n", total);

	return 0;
}
*/

/*
int main(void)
{
	int total = 0, i, num;

	printf("0부터 num까지의 덧셈, num은? ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++)
		total += i;

	printf("0부터 %d까지의 덧셈결과 : %d \n", num, total);

	return 0;
}
*/

/*
int main(void)
{
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0;)
	{
		total += input;
		printf("실수 입력(minus to quit) : ");
		scanf_s("%lf", &input);
		num++;
	}
	printf("평균: %f \n", total/(num-1));

	return 0;
}
*/

/*
int main(void)
{
	int total = 0;
	int num1 = 0;
	int num2 = 0;

	printf("정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	for (; num1<=num2; num1++)
	{
		total += num1;
	}
	printf("합: %d \n", total);

	return 0;
}
*/

int main(void)
{
	int is;
	int cur;

	for (cur=2; cur<10; cur++)
	{
		for (is = 1; is < 10; is++)
			printf("%d * %d = %d \n", cur, is, cur*is);
		printf("\n");
	}
	
	return 0;
}