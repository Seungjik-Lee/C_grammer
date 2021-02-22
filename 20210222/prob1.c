#include<stdio.h>

int main()
{
    FILE * fp = fopen("mystory.txt", "wt");

    char name[40];
    int ch;

    printf("이름을 입력하세요.\n");
    fgets(name, sizeof(name), stdin);
    printf("이름 : %s", name);
    fputs("#이름 : ",  fp);
    fputs(name, fp);

    printf("주민등록번호를 입력하세요.\n");
    fgets(name, sizeof(name), stdin);
    printf("주민등록번호 : %s", name);
    fputs("#주민등록번호 : ",  fp);
    fputs(name, fp);

    printf("전화번호를 입력하세요.\n");
    fgets(name, sizeof(name), stdin);
    printf("전화번호 : %s", name);
    fputs("#전화번호 : ",  fp);
    fputs(name, fp);

    fclose(fp);
}