#include <stdio.h>

void biggest3() {
    int num1, num2, num3;

    // Ask user for input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Logic to find the biggest number
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number.\n", num1);
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest number.\n", num2);
    } 
    else {
        printf("%d is the largest number.\n", num3);
    }

  //  return 0;
}

