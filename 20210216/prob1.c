#include <stdio.h>

typedef struct
{
    char name[30];
    char jumin[14];
} Employee;

void main()
{
    Employee emp[3];

    for (int i = 0; i < sizeof(emp) / sizeof(Employee); i++)
    {
        printf("이름 입력 : ");
        scanf("%s", emp[i].name);

        printf("주민등록번호 입력 : ");
        scanf("%s", emp[i].jumin);

        printf("입력한 이름 : %s \n", emp[i].name);
        printf("입력한 주민등록번호 : %s\n", emp[i].jumin);
    }
}