#include <stdio.h>
int main() {
    int number, ones_digit;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    ones_digit = number % 10;
    printf("The one's digit is: %d\n", ones_digit);
    return 0;
}

