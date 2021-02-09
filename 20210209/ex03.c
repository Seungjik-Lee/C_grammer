#include <stdio.h>

void main()
{
    char str[7];
    int i = 0;

    for (i = 0; i < 3; i++)
    {
        fgets(str, sizeof(str), stdin);
        printf("Read %d : %s \n", i+1, str);
    }
}