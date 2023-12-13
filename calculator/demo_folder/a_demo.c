#include <stdio.h>
#include <math.h>

int main()
{
    // Menu for calculator operations
    int function;
    float num1, num2, result;

    printf("CALCULATOR\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("5. Compare\n6. Percentage\n7. Power\n8. Convert to Binary\n");
    printf("9. Convert to Octal\n10. Convert to Hexadecimal\n");

    printf("Select your operation (1-10): ");
    scanf("%d", &function);

    // Arithmetic Operations
    if (function >= 1 && function <= 4)
    {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        if (function == 1)
        {
            result = num1 + num2;
        }
        else if (function == 2)
        {
            result = num1 - num2;
        }
        else if (function == 3)
        {
            result = num1 * num2;
        }
        else if (function == 4)
        {
            if (num2 != 0)
            {
                result = num1 / num2;
            }
            else
            {
                printf("Error\n"); // Division by zero
                return 0;          // Exit program with an error code
            }
        }

        // printf("Result: %f\n", result);
        printf("Result: %.2f\n", result);
    }

    // Comparison
    else if (function == 5)
    {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        if (num1 > num2)
        {
            // printf("%f is greater than %f\n", num1, num2);
            printf("%.2f is greater than %.2f\n", num1, num2);
        }
        else if (num1 < num2)
        {
            // printf("%f is less than %f\n", num1, num2);
            printf("%.2f is less than %.2f\n", num1, num2);
        }
        else
        {
            // printf("%f is equal to %f\n", num1, num2);
            printf("%.2f is equal to %.2f\n", num1, num2);
        }
    }

    // Percentage
    else if (function == 6)
    {
        printf("Enter the number and percentage: ");
        scanf("%f %f", &num1, &num2);
        result = (num2 / 100) * num1;
        // printf("Result: %f%% of %f is %f\n", num2, num1, result);
        printf("Result: %.2f%% of %.2f is %.2f\n", num2, num1, result);
    }

    // Power
    else if (function == 7)
    {
        printf("Enter the base and exponent: ");
        scanf("%f %f", &num1, &num2);
        result = pow(num1, num2);
        // printf("Result: %f\n", result);
        printf("Result: %.2f\n", result);
    }

    // Number System Conversion
    else if (function >= 8 && function <= 10)
    {
        printf("Enter a decimal number: ");
        scanf("%f", &num1);

        if (function == 8)
        {
            // Binary conversion
            printf("Binary equivalent: ");
            while (num1 > 0)
            {
                printf("%d", (int)num1 % 2);
                num1 /= 2;
            }
            printf("\n");
        }
        else if (function == 9)
        {
            // Octal conversion
            printf("Octal equivalent: %o\n", (int)num1);
        }
        else if (function == 10)
        {
            // Hexadecimal conversion
            printf("Hexadecimal equivalent: %X\n", (int)num1);
        }
    }

    // Invalid operation
    else
    {
        printf("Invalid Function. Please enter any valid function.\n");
        return 0; // Exit program with an error code
    }

    return 0; // Exit program successfully
}