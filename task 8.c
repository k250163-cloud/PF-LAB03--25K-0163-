#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers (e.g., 10 5): ");
    
    if (scanf("%d %d", &num1, &num2) == 2) {
        printf("Sum: %d\n", num1 + num2);
        printf("Difference: %d\n", num1 - num2);
        printf("Product: %d\n", num1 * num2);
        
        if (num2 != 0) {
            printf("Quotient (Integer): %d\n", num1 / num2);
            printf("Quotient (Floating Point): %.2f\n", (float)num1 / num2);
        } else {
            printf("Quotient: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid input. Please enter two integers.\n");
    }

return 0;
}

