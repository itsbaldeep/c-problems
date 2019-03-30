#include <stdio.h>

// This function will check if two strings are equal
int string_compare(char*, char*);

// This function returns the length of a string
int string_length(char*);

// Getting the string through command line arguments
int main(int argc, char **argv)
{
    // Validating that two string were passed
    if (argc != 3) return 1;

    // Comparing the two strings
    char *str_a = argv[1];
    char *str_b = argv[2];
    int same = string_compare(str_a, str_b);

    // If it returned 1 then the strings are same
    if (same) printf("They're same");
    else printf("They're different");
}

int string_compare(char *a, char *b)
{
    // Firstly, checking lengths of two strings
    int length_a = string_length(a);
    int length_b = string_length(b);

    // If they are different, then strings are also different
    if (length_a != length_b) return 0;

    // If they are equal, then check for each character
    for (int i = 0; i < length_a; i++)
    {
        // If the characters are not equal, then strings are different
        if (a[i] != b[i]) return 0;
    }

    // If the program gets here, then strings should be equal
    return 1;
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
