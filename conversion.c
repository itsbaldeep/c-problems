#include <stdio.h>
 
int main()
{
    // Variables to store decimal and hexadecimal values
    long int decimal;
    char hex[100];

    // Getting the decimal from user input
    scanf("%ld", &decimal);
 
    // Looping until decimal is 0
    int index = 0;
    while (decimal != 0)
    {
        // Diving by 16 everytime and holding the remainder
        long digit = decimal % 16;
        decimal /= 16;

        // In ASCII
        // 48 == '0' 49 == '1' .... 57 == '9'
        // 65 == 'A' 66 == 'B' .... 70 == 'F'
        if (digit < 10) hex[index++] = 48 + digit;
        else hex[index++] = 55 + digit;
    }
 
    // Printing the hexadecimal in "REVERSE!"
    for (int i = index; i >= 0; i--)
        printf("%c", hex[i]);
}