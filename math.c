#include <stdio.h>

int main()
{
    int a, b, soma, sub, mult, div;

    printf("Type the first number: ");
    scanf("%d.\n", &a);

    printf("Type the second number: ");
    scanf("%d.\n", &b);

    soma = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    printf("Results... \n");
    printf("=-=-=-=-=-=-=-=-=\n");
    printf("Sum: %d.\n", soma);
    printf("Subtraction: %d.\n", sub);
    printf("Multiplication: %d.\n", mult);
    printf("Division: %d.\n", div);

}