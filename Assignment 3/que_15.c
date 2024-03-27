#include <stdio.h>

int main() {
    int choice;
    double num1, num2;

    do {
   
        printf("Simple Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

      
        if(choice == 5) {
            printf("Exiting program.\n");
            break; 
        }

       
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch(choice) {
            case 1:
                printf("Result: %.2lf\n", num1 + num2);
                break;
            case 2:
                printf("Result: %.2lf\n", num1 - num2);
                break;
            case 3:
                printf("Result: %.2lf\n", num1 * num2);
                break;
            case 4:
                if(num2 == 0) {
                    printf("Error! Division by zero.\n");
                } else {
                    printf("Result: %.2lf\n", num1 / num2);
                }
                break;
            default:
                printf("Invalid choice, please enter 1-5.\n");
        }
        printf("\n"); 
    } while(choice != 5); 

    return 0;
}

