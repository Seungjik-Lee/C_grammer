#include <stdio.h>

//------------------------------------------------------------------------------조건에 따른 흐름의 분기
/*
int main(void)
{
	int num;

	printf("정수 입력 : ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력 값은 0보다 작다. \n");

	if (num > 0)
		printf("입력 값은 0보다 크다. \n");

	if (num == 0)
		printf("입력 값은 0이다. \n");

	return 0;
}
*/

/*
int main(void)
{
	int num;

	printf("성적 입력 : ");
	scanf_s("%d", &num);

	if (num >= 90)
		printf("학점은 A다. \n");

	if (num >= 80 && num <= 89)
		printf("학점은 B다. \n");

	if (num >= 70 && num <= 79)
		printf("학점은 C다. \n");

	if (num >= 60 && num <= 69)
		printf("학점은 D다. \n");

	if (num < 60)
		printf("학점은 F다. \n");

	return 0;
}
*/

/*
int main(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 : ");
	scanf_s("%d", &opt);
	printf("두개의 실수 입력 : ");
	scanf_s("%lf %lf", &num1, &num2);


	if (opt == 1)
		result = num1 + num2;

	if (opt == 2)
		result = num1 - num2;

	if (opt == 3)
		result = num1 * num2;

	if (opt == 4)
		result = num1 / num2;

	
	printf("결과 : %f \n", result);

	return 0;
}
*/

/*
int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num % 3 == 0 || num % 4 == 0)
		printf("3 또는 4의 배수 : %d \n", num);
	}

	return 0;
}
*/

/* 소수 찾기
int main(void)
{
	int num = 100;
	int i = 0;
	int j = 0;
	int stack = 0;

	for (i = 2; i < num; i++)
	{
		stack = 0;
		for(j =2; j <= num; j++)
		{
			if (i % j == 0)
				stack++;
		}
		
		if (stack == 1)
			printf("%d 이하의 소수는 %d입니다.\n", num, i);
	}

	return 0;
}
*/

/*
int main(void)
{
	int num;

	printf("정수 입력 : ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력 값은 0보다 작다.\n");
	else
		printf("입력 값은 0보다 작지 않다.\n");

	return 0;
}
*/

/*
int main(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 : ");
	scanf_s("%d", &opt);
	printf("두개의 실수 입력 : ");
	scanf_s("%lf %lf", &num1, &num2);


	if (opt == 1)
		result = num1 + num2;

	else if (opt == 2)
		result = num1 - num2;

	else if (opt == 3)
		result = num1 * num2;

	else
		result = num1 / num2;


	printf("결과 : %f \n", result);

	return 0;
}
*/

//------------------------------------------------------------------------문제08-2
/*
int main(void)
{
	int num1, num2;
	int result;

	printf("두개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 >= num2)
	{
		result = num1 - num2;
		printf("%d - %d = %d \n", num1, num2, result);
	}
	else
	{
		result = num2 - num1;
		printf("%d - %d = %d \n", num2, num1, result);
	}
	return 0;
}
*/

/*
int main(void)
{
	int sum = 0;
	int num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000)
			break;
		num++;
	}

	printf("sum : %d \n", sum);
	printf("num : %d \n", num);

	return 0;
}
*/

/*
int main(void)
{
	int num;
	printf("start! ");

	for (num = 1; num < 20; num++)
	{
		if (num%2 == 0 || num%3 == 0)
			continue;
		printf("%d ",num);
	}

	printf("end! \n");

	return 0;
}
*/

/*
int main(void)
{
	char sel;

	printf("M 오전, A 오후, E 저녁 ");
	printf("입력 :  ");
	scanf_s("%c", &sel);

	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Morning \n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;
	case 'E':
	case 'e':
		printf("Evening \n");
		break;
	}

	return 0;
}
*/
