#include <stdio.h>

int main() {

    int a, b;
    char op;
    char again;

start:

    printf("\nEnter Expression: ");
    scanf("%d %c %d", &a, &op, &b);

    if(op == '+')
        goto addition;

    if(op == '-')
        goto subtraction;

    if(op == '*')
        goto multiplication;

    if(op == '/')
        goto division;

    printf("Invalid Operator!");
    goto ask;

addition:
    printf("Result = %d", a + b);
    goto ask;

subtraction:
    printf("Result = %d", a - b);
    goto ask;

multiplication:
    printf("Result = %d", a * b);
    goto ask;

division:

    if(b == 0) {
        printf("Cannot divide by zero!");
        goto ask;
    }

    printf("Result = %.2f", (float)a / b);

ask:

    printf("\nDo you want to continue? (y/n): ");
    scanf(" %c", &again);

    if(again == 'y' || again == 'Y')
        goto start;

    return 0;
}
