#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

void main()
{
    struct point arr[3];

    for (int i = 0; i < 3; i++)
    {
        printf("arr[%d].xpos = ", i);
        scanf("%d", &(arr[i].xpos));
        printf("arr[%d].ypos = ", i);
        scanf("%d", &(arr[i].ypos));
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("arr[%d].xpos = %d \n", i, arr[i].xpos);
        printf("arr[%d].ypos = %d \n", i, arr[i].ypos);
    }
}