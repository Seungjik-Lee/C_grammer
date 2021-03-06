#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
} Point;

//원점 대칭 함수
void doA(Point *ptr)
{
    ptr->xpos = (ptr->xpos) * -1;
    ptr->ypos = (ptr->ypos) * -1;
}

//출력 함수
void doB(Point pos)
{
    printf("pos.xpos = %d, pos.ypos = %d \n", pos.xpos, pos.ypos);
    pos.xpos = 20;
}

void main()
{
    Point pos = {10, -5};
    doA(&pos);
    doB(pos);
}
