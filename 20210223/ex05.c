#define ADD
#define HIT_NUM 5

#include <stdio.h>

void main()
{
#ifdef ADD
    printf("ADD 가 선언 되어있다. \n");
#endif

#if HIT_NUM == 5
    printf("HIT_NUM은 5입니다. \n");
#elif HIT_NUM == 6
    printf("HIT_NUM은 6입니다. \n");
#endif
}