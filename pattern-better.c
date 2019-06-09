#include <stdio.h>

void main()
{
    char str[] = "UNIX";

    for (int i = 0; i < 4; i++) {
        int j = i + 1;
        printf("%-4.*s\n", j, str);
    }

    for (int i = 3; i >= 0; i--) {
        int j = i + 1;
        printf("%-4.*s\n", j, str);
    }
}