#include <stdio.h>

void main()
{
    // Let the user decide how long the series should be
    int limiter;
    printf("Enter the limit to the series: ");
    scanf("%d", &limiter);

    // Looping through each number to the limit
    for (int i = 1; i <= limiter; i++)
    {
        // If the number divides both 3 and 5
        if (i % 3 == 0 && i % 5 == 0) printf("FizzBuzz\n");

        // If the number divides 3
        else if (i % 3 == 0) printf("Fizz\n");

        // If the number divides 5
        else if (i % 5 == 0) printf("Buzz\n");

        // If the number doesn't divide 3 or 5
        else printf("%d\n", i);
    }
}
