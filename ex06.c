/*ex01*/

#include<stdio.h>

int main(void)
{
	int cur1 = 0;
 int cur2 = 0;
	int is = 1;

	printf("몇 단? ");
	scanf("%d %d", &cur1, &cur2);

    if(cur1 < cur2)
    {
	    for(cur1 = 2; cur1 <= cur2; cur1++)
        {
	        for(is = 1; is < 10; is++)
            {
            printf("%d x %d = %d\n", cur1, is, cur1*is);
            }
        }
    }
    else
    {
        for(cur2 = 2; cur2 <= cur1; cur2++)
        {
	        for(is = 1; is < 10; is++)
            {
            printf("%d x %d = %d\n", cur2, is, cur2*is);
            }
        }
    }
	return 0;
}


/*ex02*/
