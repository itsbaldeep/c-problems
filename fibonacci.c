#include <stdio.h>

int fibonacci(int);

void main()
{
    // Getting the length of series through input
    int numbers;
    printf("How many numbers do you want: ");
    scanf("%d", &numbers);

    // Getting the number by each index
    for (int i = 0; i < numbers; i++)
        printf("%d ", fibonacci(i));
}

int fibonacci(int index)
{
    // index 2, number index 0 + index 1
    // index 3, number index 2 + index 1
    if (index > 1) return fibonacci(index - 1) + fibonacci(index - 2);

    // At 0 and 1, index is same as the number itself
    // index 0, number 0 and index 1, number 1
    return index;
}
