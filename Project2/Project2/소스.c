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

	printf("������ ���� :");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result1 = num1 + num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3, result1);

	return 0;
}
*/

//---------------------------------------------------------------------------- ����03-1
/*
int main(void)
{
	int num1, num2;
	int result1;

	printf("2���� ���� :");
	scanf_s("%d %d", &num1, &num2);

	result1 = num1 - num2;
	printf("%d - %d = %d \n", num1, num2, result1);

	result1 = num1 * num2;
	printf("%d * %d = %d \n", num1, num2, result1);

	return 0;
}
*/

//---------------------------------------------------------------------------- ����03-2
/*
int main(void)
{
	int num1, num2, num3;
	int result1;

	printf("������ ���� :");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result1 = num1 * num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3, result1);

	return 0;
}
*/

//---------------------------------------------------------------------------- ����03-3
/*
int main(void)
{
	int num1;
	int result1;

	printf("���� :");
	scanf_s("%d", &num1);

	result1 = num1 * num1;
	printf("����%d ���� = %d \n", num1, result1);

	return 0;
}
*/

//---------------------------------------------------------------------------- ����03-4
/*
int main(void)
{
	int num1, num2;
	int result1;

	printf("2���� ���� :");
	scanf_s("%d %d", &num1, &num2);

	result1 = num1 / num2;
	printf("%d / %d �� �� %d \n", num1, num2, result1);

	result1 = num1 % num2;
	printf("%d / %d �� ������ %d \n", num1, num2, result1);

	return 0;
}
*/

//---------------------------------------------------------------------------- ����03-5
/*
int main(void)
{
	int num1, num2, num3;
	int result1;

	printf("3���� ���� :");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result1 = (num1-num2) * (num2+num3) * (num3%num1);

	printf("(%d - %d) * (%d + %d) * (%d �� %d) = %d \n", num1, num2, num2, num3, num3, num1, result1);

	return 0;
}
*/

//---------------------------------------------------------------------------- ������ ǥ�����
/*
int main(void)
{
	int num1, num2, num3;
	int result1;

	printf("3���� ���� :");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result1 = (num1 - num2) * (num2 + num3) * (num3 % num1);

	printf("(%d - %d) * (%d + %d) * (%d �� %d) = %d \n", num1, num2, num2, num3, num3, num1, result1);

	return 0;
}
*/

/*
int main(void)
{
	int num1 = 0xA7, num2 = 0x43, num3 = 032, num4 = 024;

	printf("0xA7�� 10���� ���� �� : %d \n", num1);
	printf("0x43�� 10���� ���� �� : %d \n", num2);
	printf(" 032�� 10���� ���� �� : %d \n", num3);
	printf(" 024�� 10���� ���� �� : %d \n", num4);

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

	printf("AND ������ ��� : %d \n\n", num4);
	printf("OR ������ ��� : %d \n\n", num5);
	printf("XOR ������ ��� : %d \n\n", num6);
	printf("NOT ������ ��� : %d \n\n", num7);
	printf("���� 1ĭ �̵� ��� : %d \n", result1);
	printf("���� 2ĭ �̵� ��� : %d \n", result2);
	printf("���� 3ĭ �̵� ��� : %d \n\n", result3);
	printf("������ 1ĭ �̵� ��� : %d \n", result4);
	printf("������ 2ĭ �̵� ��� : %d \n", result5);
	printf("������ 3ĭ �̵� ��� : %d \n", result6);


	return 0;
}
*/

/*
int main(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;

	printf("���� ch�� ũ��: %d \n", sizeof(ch));
	printf("���� inum�� ũ��: %d \n", sizeof(inum));
	printf("���� dnum�� ũ��: %d \n", sizeof(dnum));

	printf("char�� ũ��: %d \n", sizeof(char));
	printf("int�� ũ��: %d \n", sizeof(int));
	printf("long�� ũ��: %d \n", sizeof(long));
	printf("long long�� ũ��: %d \n", sizeof(long long));
	printf("float�� ũ��: %d \n", sizeof(float));
	printf("double�� ũ��: %d \n", sizeof(double));

	return 0;
}
*/

/*
int main(void)
{
	double rad;
	double area;
	printf("���� ������ �Է�:");
	scanf_s("%lf", &rad);

	area = rad * rad * 3.1415;
	printf("���� ���� : %f \n", area);

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

	printf("���� 245�� �Ǽ���: %f \n", num1);
	printf("�Ǽ� 3.1415�� ������: %d \n", num2);
	printf("ū ���� 129�� ���� ������: %d \n", ch);

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

	printf("������ ���: %f \n", divResult);

	return 0;
}
*/

//---------------------------------------------------------------------------- printf �Լ��� scanf �Լ�
int main(void)
{
	float num1;
	double num2;
	long double num3;

	printf("�Ǽ� �Է�1(e ǥ�������):");
	scanf_s("%f", &num1);
	printf("�Էµ� �Ǽ� %f \n", num1);

	printf("�Ǽ� �Է�2(e ǥ�������):");
	scanf_s("%lf", &num2);
	printf("�Էµ� �Ǽ� %f \n", num2);

	printf("�Ǽ� �Է�3(e ǥ�������):");
	scanf_s("%Lf", &num3);
	printf("�Էµ� �Ǽ� %Lf \n", num3);

	return 0;
}