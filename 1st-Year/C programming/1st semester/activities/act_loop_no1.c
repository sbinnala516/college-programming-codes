#include <stdio.h>

int main(){
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    for(num = 1; num <= 7; num++)
        printf("%d ", num);
    return 0;
}