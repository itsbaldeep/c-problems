#include <stdio.h>

// This struct describes profile of a student
struct student
{
    int id;
    char name[15];
    int maths, science, social, english;
};

// This function will take a student and print its result
void find_result(struct student);

void main()
{
    // Here is a random data set
    struct student students[5] = {
        {1, "Student A", 50, 70, 40, 30},
        {2, "Student B", 30, 60, 60, 80},
        {3, "Student C", 70, 60, 70, 30},
        {4, "Student D", 50, 90, 50, 90},
        {5, "Student E", 80, 60, 40, 30},
    };

    // This id is what the user gives
    int id;
    printf("Enter your ID: ");
    scanf("%d", &id);

    // Validating the id
    if (id > 0 && id < 6) find_result(students[id - 1]);
}

void find_result(struct student s)
{
    // Accessing the properties with dot syntax
    printf("Result of %s [ID = %d]\n", s.name, s.id);
    printf("Marks of Maths: %d\n", s.maths);
    printf("Marks of Science: %d\n", s.science);
    printf("Marks of Social Science: %d\n", s.social);
    printf("Marks of English: %d\n", s.english);
}
