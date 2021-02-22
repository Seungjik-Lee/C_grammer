#include<stdio.h>

void main ()
{
    FILE *fp1 = fopen("../a.txt", "wt");

    fputc('A', fp1);
    fputc('A', fp1);
    fputc('A', fp1);

    fclose(fp1);
}