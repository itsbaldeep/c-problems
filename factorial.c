#include <stdio.h>

int factorial(int);

void main()
{
    // Getting the input
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    // Getting the result and printing it
    int result = factorial(input);
    printf("Factorial of %d is %d\n", input, result);
}

// Recursive function to find the factorial
int factorial(int number)
{
    if (number <= 1) return 1;
    return number * factorial(number - 1);
}
