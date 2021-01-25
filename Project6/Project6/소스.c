#include <stdio.h>

/*
int SimpleFuncOne(void);
int SimpleFuncTwo(void);


int main(void)
{
	int range = 17;
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main range : %d \n", range);
	return 0;
}

int SimpleFuncOne(void)
{
	int range = 10;
	range++;
	printf("SimpleFuncOne range : %d \n", range);
	return 0;
}

int SimpleFuncTwo(void)
{
	int range1 = 20;
	int range2 = 30;
	range1++, range2++;
	printf("range1 & range2 : %d %d \n", range1, range2);
	return 0;
}
*/

/*
int main(void)
{
	int cnt;
	for (cnt = 0; cnt < 3; cnt++)
	{
		int range = 0;
		range++;
		printf("%d번째 반복, 지역변수 range은 %d \n", cnt + 1, range);
	}

	if (cnt == 3)
	{
		int range = 7;
		range++;
		printf("if문 내에 존재하는 지역변수 range은 %d \n", range);
	}

	return 0;
}
*/

/*
int main(void)
{
	int range = 1;

	if (range == 1)
	{
		int range = 7; // int range = 7;
		range += 10;
		printf("if문 내 지역변수 range : %d \n", range);
	}
	printf("main문 내 지역변수 range : %d \n", range);

	return 0;
}
*/

/*
void Add(int val);
int range;

int main(void)
{
	printf("range : %d \n", range);
	Add(3);
	printf("range : %d \n", range);
	range++;
	printf("range : %d \n", range);

	return 0;
}

void Add(int val)
{
	range += val;
}
*/

/*
void SimpleFunc(void)
{
	static int range1 = 0;
	int range2 = 0;
	range1++; range2++;
	printf("static : %d, local : %d \n", range1, range2);
}

int main(void)
{
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc();

	return 0;
}
*/

/*
int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main(void)
{
	printf("1! = %d \n", Factorial(1));
	printf("1! = %d \n", Factorial(2));
	printf("1! = %d \n", Factorial(3));
	printf("1! = %d \n", Factorial(4));
	printf("1! = %d \n", Factorial(9));

	return 0;
}
*/

//-----------------------------------------------도전 프로그래밍1
/*
int main(void)
{
	int num = 0;

	printf("10진수 정수 : ");
	scanf_s("%d", &num);

	printf("16진수 정수 : %x", num);

	return 0;
}
*/

//-----------------------------------------------도전 프로그래밍2
/*
int ggd(void)
{
	int is = 0;
	int cur1 = 0;
	int cur2 = 0;

	printf("단 입력 : ");
	scanf_s("%d %d", &cur1, &cur2);

	for (cur1 = 2; cur1 <= cur2; cur1++)
	{
		for (is = 1; is < 10; is++)
			printf("%d * %d = %d \n", cur1, is, cur1 * is);
		printf("\n");
	}

	return 0;
}

int main(void)
{
	ggd();

	return 0;
}
*/

//-----------------------------------------------도전 프로그래밍3
/*
int gcd(int a, int b)
{
	int result = 0;
	while (a)
	{
		if (a < b)
		{
			result = a;
			a = b;
			b = result;
		}
		a = a - b;
	}
	return b;
}

int main(void)
{
	int a, b;
	printf("두 수를 입력하세요 :");
	scanf_s("%d %d", &a, &b);

	printf("최대 공약수 = %d", gcd(a, b));

	return 0;
}
*/

//-----------------------------------------------도전 프로그래밍4
/*
int main(void)
{
	int cream = 0;
	int shrimp = 0;
	int cola = 0;


	for (cream = 1; cream <= 7; cream++)
	{
		for (shrimp = 1; shrimp <= 5; shrimp++)
		{
			for (cola = 1; cola <= 8; cola++)
			{

				printf("%d %d %d ", cream, shrimp, cola);
			}
		}
	}
	return 0;
}
*/

//-----------------------------------------------도전 프로그래밍5

/*
int main(void)
{
	int range = 30;
	int count = 0;

	for (int num = 1; num <= range; num++)
	{
		count = 0;

		for (int i = 1; i <= num; i++)
		{
			if (num % i == 0)  //모든수를 대입해서 나머지가 0이 나온경우가 2번 이라는 것은 1과 자기자신밖에 없다는 것을 의미
			{
				count++;
			}
		}
		if (count == 2)
		{
			printf("%d ", num);
		}

	}
	return 0;
}
*/


//-----------------------------------------------도전 프로그래밍6

