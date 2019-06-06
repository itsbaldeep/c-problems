#include <stdio.h>

void main()
{
    char fname[100];
    printf("Enter file name: ");
    scanf("%s", fname);
    FILE* fptr = fopen(fname, "r");
    int count = 0;

    char c = getc(fptr);
    while (c != EOF) {
        if (c == '\n') count++;
        c = getc(fptr);
    }

    fclose(fptr);
    printf("There are %d lines\n", count > 0 ? count + 1 : count);
}