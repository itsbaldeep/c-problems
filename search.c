#include <stdio.h>

void main()
{
    int list[100];
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter the element: ");
        scanf("%d", &list[i]);
    }

    int num;
    printf("Enter a number to find: ");
    scanf("%d", &num);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (list[i] == num) found = 1;
    }

    printf(found ? "Found!\n" : "Not Found\n");
}