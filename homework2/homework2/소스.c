#include <stdio.h>

double Add(void)
{
	double input1, input2;
	double result;
	while (1)
	{
		printf("���� ���� �Է��ϼ��� : ");
		scanf_s("%lf %lf", &input1, &input2);
		result = input1 + input2;
		printf("��� ����� %lf�Դϴ�.\n", result);
	}
	return result;
}
double Sub(void)
{
	double input1, input2;
	double result;
	while (1)
	{
		printf("�� ���� �Է��ϼ��� : ");
		scanf_s("%lf %lf", &input1, &input2);
		result = input1 - input2;
		printf("��� ����� %lf�Դϴ�.\n", result);
	}
	return result;
}
double Mul(void)
{
	double input1, input2;
	double result;
	while (1)
	{
		printf("���� ���� �Է��ϼ��� : ");
		scanf_s("%lf %lf", &input1, &input2);
		result = input1 * input2;
		printf("��� ����� %lf�Դϴ�.\n", result);
	}
	return result;
}
double Div(void)
{
	double input1, input2;
	double result;
	while (1)
	{
		printf("���� ���� �Է��ϼ��� : ");
		scanf_s("%lf %lf", &input1, &input2);
		result = input1 / input2;
		printf("��� ����� %lf�Դϴ�.\n", result);
	}
	return result;
}
int switch1(void)
{
	int num;
	printf("1.���� 2.���� 3.���� 4.������ : ");
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
