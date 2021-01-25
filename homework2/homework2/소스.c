#include <stdio.h>

double Add(void)
{
	double input1, input2;
	double result;
	while (1)
	{
		printf("더할 수를 입력하세요 : ");
		scanf_s("%lf %lf", &input1, &input2);
		result = input1 + input2;
		printf("계산 결과는 %lf입니다.\n", result);
	}
	return result;
}
double Sub(void)
{
	double input1, input2;
	double result;
	while (1)
	{
		printf("뺄 수를 입력하세요 : ");
		scanf_s("%lf %lf", &input1, &input2);
		result = input1 - input2;
		printf("계산 결과는 %lf입니다.\n", result);
	}
	return result;
}
double Mul(void)
{
	double input1, input2;
	double result;
	while (1)
	{
		printf("곱할 수를 입력하세요 : ");
		scanf_s("%lf %lf", &input1, &input2);
		result = input1 * input2;
		printf("계산 결과는 %lf입니다.\n", result);
	}
	return result;
}
double Div(void)
{
	double input1, input2;
	double result;
	while (1)
	{
		printf("나눌 수를 입력하세요 : ");
		scanf_s("%lf %lf", &input1, &input2);
		result = input1 / input2;
		printf("계산 결과는 %lf입니다.\n", result);
	}
	return result;
}
int switch1(void)
{
	int num;
	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 : ");
	scanf_s("%d", &num);
	switch (num)
	{
	case 1:
		Add();
		break;
	case 2:
		Sub();
		break;
	case 3:
		Mul();
		break;
	case 4:
		Div();
		break;
	}
	return 0;
}
int main(void)
{
	switch1();
}
