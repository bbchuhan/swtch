#include <stdio.h>

// Function prototypes
float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);
int modulus(int x, int y);

int main() {
    int choice;
    float num1, num2;

    do {
        printf("Press 1 for addition\n");
        printf("Press 2 for subtraction\n");
        printf("Press 3 for multiplication\n");
        printf("Press 4 for division\n");
        printf("Press 5 for modulus\n");
        printf("Press 0 to exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program...\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch(choice) {
            case 1:
                printf("Result: %.2f\n", add(num1, num2));
                break;
            case 2:
                printf("Result: %.2f\n", subtract(num1, num2));
                break;
            case 3:
                printf("Result: %.2f\n", multiply(num1, num2));
                break;
            case 4:
                if (num2 != 0) {
                    printf("Result: %.2f\n", divide(num1, num2));
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;
            case 5:
                if (num2 != 0) {
                    printf("Result: %d\n", modulus((int)num1, (int)num2));
                } else {
                    printf("Error! Modulo by zero.\n");
                }
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}

// Function definitions
float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    return x / y;
}

int modulus(int x, int y) {
    return x % y;
}
