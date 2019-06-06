#include <stdio.h>
#define swap(x, y) int t = x; x = y; y = t;

void swap_fn(int*, int*);

void main()
{
    int a;
    printf("Value of a: ");
    scanf("%d", &a);
    int b;
    printf("Value of b: ");
    scanf("%d", &b);

    printf("a is %d and b is %d\n", a, b);

    printf("Now swapping\n");
    // swap(a, b);
    swap_fn(&a, &b);

    printf("a is %d and b is %d\n", a, b);
}

void swap_fn(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
