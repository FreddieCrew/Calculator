#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Type the input number: ");
    scanf_s("%lf", &num1);

    printf("Type the operator(+, -, *, /): ");
    scanf_s(" %c", &operator);

    printf("Type the operation number: ");
    scanf_s("%lf", &num2);

    switch (operator) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            printf("Invalid operation, division by zero is impossible\n");
            return -1;
        }
        break;
    default:
        printf("Invalid operator!\n");
        return -1;
    }

    printf("Result: %.2lf\n", result);

    system("pause");
    return 0;
}
