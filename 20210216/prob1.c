#include <stdio.h>

typedef struct
{
    char name[30];
    char jumin[14];
} Employee;

void main()
{
    Employee emp;

    printf("이름 입력 : ");
    scanf("%s", emp.name);

    printf("주민등록번호 입력 : ");
    scanf("%s", emp.jumin);

    printf("입력한 이름 : %s", emp.name);
    printf("입력한 주민등록번호 : %s", emp.jumin);
}