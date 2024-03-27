#include <stdio.h>
#include <stdbool.h>


int add(int num1, int num2, int *result) {
    *result = num1 + num2;
    return 0; 
}


int subtract(int num1, int num2, int *result) {
    *result = num1 - num2;
    return 0; 
}


int multiply(int num1, int num2, int *result) {
    *result = num1 * num2;
    return 0;
}


int divide(int num1, int num2, int *result) {
    if (num2 == 0)
        return 1; 
    else {
        *result = num1 / num2;
        return 0; 
    }
}

int main() {
    int num1, num2, result;
    char operator;
    int error = 0; 

    printf("Enter first operand: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second operand: ");
    scanf("%d", &num2);

 
    switch(operator) {
        case '+':
            error = add(num1, num2, &result);
            break;
        case '-':
            error = subtract(num1, num2, &result);
            break;
        case '*':
            error = multiply(num1, num2, &result);
            break;
        case '/':
            error = divide(num1, num2, &result);
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1; 
    }

    if (error == 1)
        printf("Error: Division by zero\n");
    else
        printf("Result: %d\n", result);

    return 0;
}

