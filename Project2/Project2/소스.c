#include<stdio.h>

/*
int main(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == num2);
	result2 = (num1 <= num2);
	result3 = (num1 > num2);


	printf("result1 : %d \n", result1);	
	printf("result2 : %d \n", result2);
	printf("result3 : %d \n", result3);

	return 0;
}
*/

/*
int main(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1==10 && num2==12);
	result2 = (num1<12 || num2>12);
	result3 = (!num1);


	printf("result1 : %d \n", result1);
	printf("result2 : %d \n", result2);
	printf("result3 : %d \n", result3);

	return 0;
}
*/

/*
int main(void)
{
	int num1, num2, num3;
	int result1;

	printf("세계의 정수 :");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result1 = num1 + num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3, result1);

	return 0;
}
*/

//---------------------------------------------------------------------------- 문제03-1
/*
int main(void)
{
	int num1, num2;
	int result1;

	printf("2개의 정수 :");
	scanf_s("%d %d", &num1, &num2);

	result1 = num1 - num2;
	printf("%d - %d = %d \n", num1, num2, result1);

	result1 = num1 * num2;
	printf("%d * %d = %d \n", num1, num2, result1);

	return 0;
}
*/

//---------------------------------------------------------------------------- 문제03-2
/*
int main(void)
{
	int num1, num2, num3;
	int result1;

	printf("세개의 정수 :");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result1 = num1 * num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3, result1);

	return 0;
}
*/

//---------------------------------------------------------------------------- 문제03-3
/*
int main(void)
{
	int num1;
	int result1;

	printf("정수 :");
	scanf_s("%d", &num1);

	result1 = num1 * num1;
	printf("정수%d 제곱 = %d \n", num1, result1);

	return 0;
}
*/

//---------------------------------------------------------------------------- 문제03-4
/*
int main(void)
{
	int num1, num2;
	int result1;

	printf("2개의 정수 :");
	scanf_s("%d %d", &num1, &num2);

	result1 = num1 / num2;
	printf("%d / %d 의 몫 %d \n", num1, num2, result1);

	result1 = num1 % num2;
	printf("%d / %d 의 나머지 %d \n", num1, num2, result1);

	return 0;
}
*/

//---------------------------------------------------------------------------- 문제03-5
/*
int main(void)
{
	int num1, num2, num3;
	int result1;

	printf("3개의 정수 :");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result1 = (num1-num2) * (num2+num3) * (num3%num1);

	printf("(%d - %d) * (%d + %d) * (%d ÷ %d) = %d \n", num1, num2, num2, num3, num3, num1, result1);

	return 0;
}
*/

//---------------------------------------------------------------------------- 데이터 표현방식
/*
int main(void)
{
	int num1, num2, num3;
	int result1;

	printf("3개의 정수 :");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result1 = (num1 - num2) * (num2 + num3) * (num3 % num1);

	printf("(%d - %d) * (%d + %d) * (%d ÷ %d) = %d \n", num1, num2, num2, num3, num3, num1, result1);

	return 0;
}
*/

/*
int main(void)
{
	int num1 = 0xA7, num2 = 0x43, num3 = 032, num4 = 024;

	printf("0xA7의 10진수 정수 값 : %d \n", num1);
	printf("0x43의 10진수 정수 값 : %d \n", num2);
	printf(" 032의 10진수 정수 값 : %d \n", num3);
	printf(" 024의 10진수 정수 값 : %d \n", num4);

	printf("%d - %d = %d \n", num1, num2, num1-num2);
	printf("%d + %d = %d \n", num3, num4, num3+num4);

	return 0;
}
*/

/*
int main(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = -16;
	int num4 = num1 & num2;
	int num5 = num1 | num2;
	int num6 = num1 ^ num2;
	int num7 = ~num1;
	int result1 = num1 << 1;
	int result2 = num1 << 2;
	int result3 = num1 << 3;
	int result4 = num3 >> 1;
	int result5 = num3 >> 2;
	int result6 = num3 >> 3;

	printf("AND 연산의 결과 : %d \n\n", num4);
	printf("OR 연산의 결과 : %d \n\n", num5);
	printf("XOR 연산의 결과 : %d \n\n", num6);
	printf("NOT 연산의 결과 : %d \n\n", num7);
	printf("왼쪽 1칸 이동 결과 : %d \n", result1);
	printf("왼쪽 2칸 이동 결과 : %d \n", result2);
	printf("왼쪽 3칸 이동 결과 : %d \n\n", result3);
	printf("오른쪽 1칸 이동 결과 : %d \n", result4);
	printf("오른쪽 2칸 이동 결과 : %d \n", result5);
	printf("오른쪽 3칸 이동 결과 : %d \n", result6);


	return 0;
}
*/

/*
int main(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;

	printf("변수 ch의 크기: %d \n", sizeof(ch));
	printf("변수 inum의 크기: %d \n", sizeof(inum));
	printf("변수 dnum의 크기: %d \n", sizeof(dnum));

	printf("char의 크기: %d \n", sizeof(char));
	printf("int의 크기: %d \n", sizeof(int));
	printf("long의 크기: %d \n", sizeof(long));
	printf("long long의 크기: %d \n", sizeof(long long));
	printf("float의 크기: %d \n", sizeof(float));
	printf("double의 크기: %d \n", sizeof(double));

	return 0;
}
*/

/*
int main(void)
{
	double rad;
	double area;
	printf("원의 반지름 입력:");
	scanf_s("%lf", &rad);

	area = rad * rad * 3.1415;
	printf("원의 넓이 : %f \n", area);

	return 0;
}
*/

/*
int main(void)
{
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);

	printf("%c%c%c%c%c%c%c%c", 83, 69, 85, 78, 71, 74, 73, 75);
	return 0;
}
*/

/*
int main(void)
{
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로: %f \n", num1);
	printf("실수 3.1415를 정수로: %d \n", num2);
	printf("큰 정수 129를 작은 정수로: %d \n", ch);

	return 0;
}
*/

/*
int main(void)
{
	double num1 = 3;
	double num2 = 4;
	double divResult;
	
	divResult = num1 / num2;

	printf("나눗셈 결과: %f \n", divResult);

	return 0;
}
*/

//---------------------------------------------------------------------------- printf 함수와 scanf 함수
int main(void)
{
	float num1;
	double num2;
	long double num3;

	printf("실수 입력1(e 표기법으로):");
	scanf_s("%f", &num1);
	printf("입력된 실수 %f \n", num1);

	printf("실수 입력2(e 표기법으로):");
	scanf_s("%lf", &num2);
	printf("입력된 실수 %f \n", num2);

	printf("실수 입력3(e 표기법으로):");
	scanf_s("%Lf", &num3);
	printf("입력된 실수 %Lf \n", num3);

	return 0;
}