#include <stdio.h>

int main() {
    double float_num;

    printf("Enter a floating-point number (e.g., 123.456789): ");
    
    if (scanf("%lf", &float_num) == 1) { 
        printf("2 decimal places: %.2f\n", float_num);
        printf("6 decimal places: %.6f\n", float_num);
    } else {
        printf("Invalid input.\n");
    }

return 0;
}
