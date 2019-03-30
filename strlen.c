#include <stdio.h>

// This function returns the length of a string
int string_length(char*);

// We are getting string through command line arguments
int main(int argc, char **argv)
{
    // Checking if we got more than or less than one argument
    if (argc != 2) return 1;

    // Getting the length of the string and printing
    char *str = argv[1];
    int length = string_length(str);
    printf("%s is %d characters long", str, length);
}

int string_length(char *str)
{
    // Making a copy of the pointer to traverse the string
    char *p = str;

    // Traversing through the string till it has a NULL CHAR
    int count = 0;
    while (*p != '\0')
    {
        // Go to the next memory location
        p++;
        count++;
    }
    return count;
}
