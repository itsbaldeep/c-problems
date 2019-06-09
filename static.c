#include <stdio.h>

int call_static();

void main()
{
    int j = 0;
    j = call_static();
    printf("%d\n",j);
    j = call_static ();
    printf("%d\n",j);
    j = call_static();
    printf("%d\n",j);
}

int call_static()
{
    static int i = 1;
    return i++;
}