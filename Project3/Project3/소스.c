#include <stdio.h>

//----------------------------------------------------------------------------- �ݺ���
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
		printf("%d��° apple \n",num++);
	}
	
	num = 1;
	printf("\n");

	while (num < 4)
	{
		printf("%d��° banana \n", num++);
	}

	num = 1;
	printf("\n");

	while (num < 11)
	{
		printf("%d��° coffee \n", num++);
	}

	return 0;
}
*/

/*
int main(void)
{
	int dan = 0;
	int num = 1;

	printf("�� ��?");
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

	printf("�� : ");
	scanf_s("%d", &cur);

	printf("���� ���� : ");
	scanf_s("%d", &is);

	while (i <= is)
	{
		printf("%d * %d = %d \n", cur, i, cur * i);
		i++;
	}

	return 0;
}
*/

//-------------------------------------------------------------------------------����7-1
/*
int main(void)
{
	int num1;
	int i = 0;

	printf("���� ���� : ");
	scanf_s("%d", &num1);

	while (i <= num1)
	{
		printf("Hello World! \n");
		i++;
	}

	return 0;
}
*/

//-------------------------------------------------------------------------------����7-2
/*
int main(void)
{
	int num1 = 0;
	int num2 = 0;

	printf("���� ���� : ");
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

		printf("¦���� �հ� : %d \n", total);

	return 0;
}
*/

/*
int main(void)
{
	int total = 0, i, num;

	printf("0���� num������ ����, num��? ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++)
		total += i;

	printf("0���� %d������ ������� : %d \n", num, total);

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
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf_s("%lf", &input);
		num++;
	}
	printf("���: %f \n", total/(num-1));

	return 0;
}
*/

/*
int main(void)
{
	int total = 0;
	int num1 = 0;
	int num2 = 0;

	printf("���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	for (; num1<=num2; num1++)
	{
		total += num1;
	}
	printf("��: %d \n", total);

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