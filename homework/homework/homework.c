#include <stdio.h>

// for ��


int main(void)
{
	int cur = 0;
	int is = 0;
	int i = 0;

	printf("�� ��? ");
	scanf_s("%d", &cur);

	printf("���� ���� : ");
	scanf_s("%d", &is);

	for (i = 1; i <= is ; i++)
	{
		printf("%d * %d = %d \n", cur, i, cur*i);
	}


	return 0;
}


// while ��

int main(void)
{
	int cur = 1, is = 1;
	int i = 1;

	printf("�� ��? ");
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


// do~while ��

int main(void)
{
	int cur = 1, is = 1;
	int i = 1;

	printf("�� ��? ");
	scanf_s("%d", &cur);

	printf("���� ���� : ");
	scanf_s("%d", &is);

	do
	{
		printf("%d * %d = %d \n", cur, i, cur * i);
		i++;
	} while (i < is+1);

	return 0;
}
