#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int prime = 1;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) prime = 0;
    }

    printf(prime ? "Prime" : "Not Prime");
}
