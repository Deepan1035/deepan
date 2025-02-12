#include <stdio.h>
int main() {
    int number, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);
    remainder = number % 8;
    printf("Remainder after dividing by 8: %d\n", remainder);
    return 0;
}

