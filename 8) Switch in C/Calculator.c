#include <stdio.h>

int main() {

    int a, b;
    char op;

    printf("Enter Expression (Example: 10 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            printf("Result = %d", a / b);
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}
