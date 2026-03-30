#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop until original number becomes 0
    while (num != 0) {
        remainder = num % 10;          // Extract the last digit
        reverse = reverse * 10 + remainder; // Add it to the reversed value
        num /= 10;                     // Remove the last digit from original
    }

    printf("Reversed number: %d\n", reverse);
    return 0;
}
==============================================================================
