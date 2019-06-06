#include <stdio.h>
#include <string.h>

#define pattern(str) \
for (int i = 0; i < strlen(str); i++) { \
    for (int j = 0; j <= i; j++) { \
        printf("%c", str[j]); \
    } \
    printf("\n"); \
} \
for (int i = strlen(str) - 1; i >= 0; i--) { \
    for (int j = 0; j < i; j++) { \
        printf("%c", str[j]); \
    } \
    printf("\n"); \
}

void main()
{
    char str[] = "COBOL";
    pattern(str);    
}