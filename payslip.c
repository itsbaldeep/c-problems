#include <stdio.h>

// This function will prompt for input
int prompt();

// This will print the salary based of wage
void print_salary(int);

void main()
{
    // Prompting for input
    int input = prompt();

    // Validating the input, also input 6 means quit
    if (input < 1 || input > 5) return;

    // Prompting for work hours
    int hours;
    printf("How many hours do you work?: ");
    scanf("%d", &hours);

    // Validating work hours
    if (hours < 0 || hours > 18) return;

    // Inversely relate "job index on prompt" and "wage"
    print_salary(hours * (150 + 150 / input));
}

int prompt()
{
    printf("PAYSLIP GENERATION\n");
    printf("1. Faculty\n");
    printf("2. Non-Academic Staff\n");
    printf("3. Consultants\n");
    printf("4. Skilled Workers\n");
    printf("5. Security Personnels\n");
    printf("6. Quit\n");

    int input;
    scanf("%d", &input);
    return input;
}

void print_salary(int wage)
{
    // 28 days in a month
    printf("Salary for this month: %d", wage * 28);
}
