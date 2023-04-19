#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[]) {
    int num1, num2, result;
    char operator;

    if (argc != 4) {
        printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
        return 1;
    }

    num1 = atoi(argv[1]);
    operator = argv[2][0];
    num2 = atoi(argv[3]);

    if (operator == '+') {
        result = num1 + num2;
    }
    else if (operator == '-') {
        result = num1 - num2;
    }
    else if (operator == 'x' || operator == '*') {
        result = num1 * num2;
    }
    else if (operator == '/') {
        result = num1 / num2;
    }
    else if (operator == '%') {
        result = num1 % num2;
    }
    else {
        printf("Invalid operator: %c\n", operator);
        return 1;
    }

    printf("%d %c %d = %d\n", num1, operator, num2, result);

    return 0;
}
