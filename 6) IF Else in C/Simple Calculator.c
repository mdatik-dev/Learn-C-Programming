#include <stdio.h>

int main() {

    int a, b;
    char op;

    printf("Enter Expression (Example: 10 + 20): ");
    scanf("%d %c %d", &a, &op, &b);

    if(op == '+')
        printf("Result = %d", a + b);
    else if(op == '-')
        printf("Result = %d", a - b);
    else if(op == '*')
        printf("Result = %d", a * b);
    else if(op == '/')
        printf("Result = %d", a / b);
    else
        printf("Invalid Operator");

    return 0;
}
