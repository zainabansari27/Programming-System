#include <stdio.h>

int main() {
   int num1, num2;
    int quotient, remainder;

    printf("Enter the first integer =  ");
    scanf("%d", &num1);

    printf("Enter the second integer =  ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Cannot divide by zero.\n");
        return 1; 
    }
    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
