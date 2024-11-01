#include <stdio.h>

int main() {
    int fahrenheit;

    printf("Enter Fahrenheit to convert: ");
    scanf("%d", &fahrenheit);

    float celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("%d Fahrenheit is equivalent to %f Celsius\n", fahrenheit, celsius);

    return 0;
}

