#include <stdio.h>

//------------------------------------------------------------------------------���ǿ� ���� �帧�� �б�
/*
int main(void)
{
	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("�Է� ���� 0���� �۴�. \n");

	if (num > 0)
		printf("�Է� ���� 0���� ũ��. \n");

	if (num == 0)
		printf("�Է� ���� 0�̴�. \n");

	return 0;
}
*/

/*
int main(void)
{
	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num >= 90)
		printf("������ A��. \n");

	if (num >= 80 && num <= 89)
		printf("������ B��. \n");

	if (num >= 70 && num <= 79)
		printf("������ C��. \n");

	if (num >= 60 && num <= 69)
		printf("������ D��. \n");

	if (num < 60)
		printf("������ F��. \n");

	return 0;
}
*/

/*
int main(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������ : ");
	scanf_s("%d", &opt);
	printf("�ΰ��� �Ǽ� �Է� : ");
	scanf_s("%lf %lf", &num1, &num2);


	if (opt == 1)
		result = num1 + num2;

	if (opt == 2)
		result = num1 - num2;

	if (opt == 3)
		result = num1 * num2;

	if (opt == 4)
		result = num1 / num2;

	
	printf("��� : %f \n", result);

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
		printf("3 �Ǵ� 4�� ��� : %d \n", num);
	}

	return 0;
}
*/

/* �Ҽ� ã��
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
			printf("%d ������ �Ҽ��� %d�Դϴ�.\n", num, i);
	}

	return 0;
}
*/

/*
int main(void)
{
	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("�Է� ���� 0���� �۴�.\n");
	else
		printf("�Է� ���� 0���� ���� �ʴ�.\n");

	return 0;
}
*/

/*
int main(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������ : ");
	scanf_s("%d", &opt);
	printf("�ΰ��� �Ǽ� �Է� : ");
	scanf_s("%lf %lf", &num1, &num2);


	if (opt == 1)
		result = num1 + num2;

	else if (opt == 2)
		result = num1 - num2;

	else if (opt == 3)
		result = num1 * num2;

	else
		result = num1 / num2;


	printf("��� : %f \n", result);

	return 0;
}
*/

//------------------------------------------------------------------------����08-2
/*
int main(void)
{
	int num1, num2;
	int result;

	printf("�ΰ��� ���� �Է� : ");
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

	printf("M ����, A ����, E ���� ");
	printf("�Է� :  ");
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
