#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Please enter your name: ");
    scanf("%49s", name); 
    
    printf("Please enter your age: ");
    if (scanf("%d", &age) != 1) { 
        age = -1;
    }

    if (age != -1) {
        printf("Hello %s, you are %d years old.\n", name, age);
    } else {
        printf("Invalid age input.\n");
    }

return 0;
}
