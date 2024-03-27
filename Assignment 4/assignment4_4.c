#include <stdio.h>
#include <math.h> 


double calculator(double operand1, double operand2, char operator) {
    double result;
    switch(operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if(operand2 != 0)
                result = operand1 / operand2;
            else {
                printf("Error: Division by zero\n");
                return NAN; 
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return NAN; 
    }
    return result;
}

int main() {
    double operand1, operand2, result;
    char operator;

    printf("Enter first operand: ");
    scanf("%lf", &operand1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second operand: ");
    scanf("%lf", &operand2);

    result = calculator(operand1, operand2, operator);

    if (isnan(result)) 
        printf("Result: Undefined\n");
    else
        printf("Result: %.2lf\n", result);

    return 0;
}

