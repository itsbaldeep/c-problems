#include <stdio.h>
#include <string.h>

void main()
{
    char str1[20];
    printf("Enter first string: ");
    scanf("%s", str1);
    char str2[20];
    printf("Enter second string: ");
    scanf("%s", str2);

    char str3[40];
    int len1 = strlen(str1), len2 = strlen(str2);
    for (int i = 0; i < len1; i++) 
        str3[i] = str1[i];
    for (int i = 0; i < len2; i++) 
        str3[i + len1] = str2[i];

    printf("%s", str3);
}