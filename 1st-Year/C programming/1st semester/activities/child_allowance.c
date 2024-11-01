#include <stdio.h>
#define RATE 0.75

int main(){

    double child1, child2, A_child1, A_child2;

    printf("Age for child 1: ");
    scanf("%lf", &child1); 

    printf("Age for child 2: ");
    scanf("%lf", &child2);

    A_child1 = RATE * child1;
    A_child2 = RATE * child2;

    printf("Allowance for child 1 is %.2lf\n", A_child1);
    printf("Allowance for child 2 is %.2lf\n", A_child2);

    return 0;
}