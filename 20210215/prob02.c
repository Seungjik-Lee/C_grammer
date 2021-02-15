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
    struct employee arr[3];

    for (int i = 0; i < 3; i++)
    {
        printf("이름 : ");
        scanf("%s", arr[i].name);
        printf("주민번호 : ");
        scanf("%s", arr[i].juNum);
        printf("급여 : ");
        scanf("%d", &(arr[i].money));
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("이름 : %s \n", arr[i].name);
        printf("주민번호 : %s \n", arr[i].juNum);
        printf("급여 : %d \n", arr[i].money);
    }
}