#include <stdio.h>
#include <math.h>

void main()
{
    int option;

    do
    {
        printf("\nCALCULATOR MENU :\n");
        printf("1. Arithmetic Operation.\n");
        printf("2. Compare Numbers.\n");
        printf("3. Find Percentage.\n");
        printf("4. Convert Number System.\n");
        printf("0. Exit.\n");

        printf("Select Your Operation : \n");
        scanf("%d\n", &option);
    }

    while (option != 0);

    switch (option)
    {
    case 1:
    }
}