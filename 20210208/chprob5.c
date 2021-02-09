#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int User;
    int Computer;
    int Win_count = 0;
    int Draw_count = 0;
    char *arr[4] = {"\0", "가위", "바위", "보"};

    srand((int)time(NULL));

    while (1)
    {
        printf("바위는 1, 가위는 2, 보는 3 : ");
        scanf("%d", &User);

        Computer = rand() % 3 + 1;

        if (User == 1 && Computer == 2 || User == 2 && Computer == 3 || User == 3 && Computer == 1)
        {
            printf("당신은 %s 선택, 컴퓨터는 %s 선택. 이겼습니다. \n", arr[User], arr[Computer]);
            Win_count++;
        }
        
        else if (User == Computer)
        {
            printf("당신은 %s 선택, 컴퓨터는 %s 선택. 비겼습니다. \n", arr[User], arr[Computer]);
            Draw_count++;
        }

        else if (User == 1 && Computer == 3 || User == 2 && Computer == 1 || User == 3 && Computer == 2)
        {
            printf("당신은 %s 선택, 컴퓨터는 %s 선택. 졌습니다. \n", arr[User], arr[Computer]);
            break;
        }
     
    }
    printf("%d승 %d무 \n", Win_count, Draw_count);
}
