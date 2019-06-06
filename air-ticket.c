#include <stdio.h>

void main()
{
    int fare, age;
    printf("Enter the fare: ");
    scanf("%d", &fare);
    printf("Enter your age: ");
    scanf("%d", &age);

    int fare_ad;
    if (age < 14) fare_ad = fare - 0.5 * fare;
    else if (age >= 14 && age < 50) fare_ad = fare - 0.1 * fare;
    else if (age >= 50) fare_ad = fare - 0.2 * fare;

    printf("Fare before discount is %d\n", fare);
    printf("Fare after discount is %d\n", fare_ad);
}