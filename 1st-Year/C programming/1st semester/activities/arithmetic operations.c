#include <stdio.h>
#include <conio.h>

void main() {
    double a, b, c, d, e, f, g;

    printf("Enter the value of a: ");
    scanf("%lf", &a);

    printf("Enter the value of b: ");
    scanf("%lf", &b);

    printf("Enter the value of c: ");
    scanf("%lf", &c);

    printf("Enter the value of d: ");
    scanf("%lf", &d);

    printf("Enter the value of e: ");
    scanf("%lf", &e);

    printf("Enter the value of f: ");
    scanf("%lf", &f);

    printf("Enter the value of g: ");
    scanf("%lf", &g);

    double sum = a + b + c + d + e + f + g;
    double product = a * b * c * d * e * f * g;
    double average = sum / 7.0;

    printf("Sum: %.2lf\n", sum);
    printf("GPA: %.2lf\n", average);

    getch();
}