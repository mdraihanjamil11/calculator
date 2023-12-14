#include <stdio.h>
#include <math.h>

void arithmeticOperation()
{
    double num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        }
        else
        {
            printf("Error: Division by zero\n");
        }
        break;
    default:
        printf("Error: Invalid operator\n");
    }
}

void compareNumbers()
{
    double num1, num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (num1 > num2)
        printf("%.2lf is greater than %.2lf\n", num1, num2);
    else if (num1 < num2)
        printf("%.2lf is less than %.2lf\n", num1, num2);
    else
        printf("%.2lf is equal to %.2lf\n", num1, num2);
}

void findPercentage()
{
    double base, percentage, result;

    printf("Enter the base value: ");
    scanf("%lf", &base);
    printf("Enter the percentage: ");
    scanf("%lf", &percentage);

    result = (percentage / 100) * base;
    printf("%.2lf%% of %.2lf is %.2lf\n", percentage, base, result);
}

void findPower()
{
    double base, exponent, result;

    printf("Enter the base value: ");
    scanf("%lf", &base);
    printf("Enter the exponent value: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);
    printf("%.2lf raised to the power %.2lf is %.2lf\n", base, exponent, result);
}

void convertNumberSystem()
{
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("Decimal: %d\n", decimalNumber);
    printf("Binary: %b\n", decimalNumber);
    printf("Octal: %o\n", decimalNumber);
    printf("Hexadecimal: %x\n", decimalNumber);
}

int main()
{
    int choice;

    do
    {
        printf("\nCalculator Menu:\n");
        printf("1. Arithmetic Operation\n");
        printf("2. Compare Numbers\n");
        printf("3. Find Percentage\n");
        printf("4. Find Power\n");
        printf("5. Convert Number System\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            arithmeticOperation();
            break;
        case 2:
            compareNumbers();
            break;
        case 3:
            findPercentage();
            break;
        case 4:
            findPower();
            break;
        case 5:
            convertNumberSystem();
            break;
        case 0:
            printf("Exiting calculator. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 0);

    return 0;
}
