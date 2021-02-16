#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

typedef struct point Point;

typedef struct
{
    char name[20];
    char phone[20];
    int age;
} Person;

void main()
{
    Point pos = {10, 20};
    Person man = {"이승직", "010-9876-5432", 26};

    printf("pos.xpos = %d, pos.ypos = %d \n", pos.xpos, pos.ypos);
    printf("man.name = %s, man.phone = %s \n", man.name, man.phone);
    printf("man.age = %d \n", man.age);
}