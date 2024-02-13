#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    float start, end, increment;

    // Accept starting, ending, and increment values from the user
    printf("Enter the starting Fahrenheit value: ");
    scanf("%f", &start);

    printf("Enter the ending Fahrenheit value: ");
    scanf("%f", &end);

    printf("Enter the increment value: ");
    scanf("%f", &increment);

    // Print the table header
    printf("\nFahrenheit\tCelsius\n");

    // Convert and print Fahrenheit to Celsius in the given range with the specified increment
    for (fahrenheit = start; fahrenheit <= end; fahrenheit += increment) {
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.2f\t\t%.2f\n", fahrenheit, celsius);
    }

    return 0;
}
