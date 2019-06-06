#include <stdio.h>

void main()
{
    char fname[100];
    printf("Enter file name: ");
    scanf("%s", fname);
    FILE* fone = fopen(fname, "r");
    FILE* ftwo = fopen("copy", "w");

    char c = getc(fone);
    while (c != EOF) {
        putc(c, ftwo);
        c = getc(fone);
    }

    fclose(fone);
    fclose(ftwo);
}