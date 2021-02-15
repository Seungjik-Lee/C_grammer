#include <stdio.h>
#include <string.h>

struct employee
{
    char name[30];
    char juNum[20];
    int money;
};

void main()
{
    struct employee man1;

    printf("이름 : ");
    scanf("%s", man1.name);
    printf("주민번호 : ");
    scanf("%s", man1.juNum);
    printf("급여 : ");
    scanf("%d", &(man1.money));

    printf("종업원 이름 : ");
    printf("%s \n", man1.name);
    printf("종업원 주민번호 : ");
    printf("%s \n", man1.juNum);
    printf("종업원 급여 : ");
    printf("%d \n", man1.money);
}