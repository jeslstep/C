#include <stdio.h>

int main(void)
{
    // Declare variables
    int num;
    int num1;
    // Ask user for first integer input
    printf("Enter the first integer: ");
    scanf("%d", &num);
    // Ask user for second integer input
    printf("Enter the second integer: ");
    scanf("%d", &num1);

    // Output the quocient of first and second integer
    printf("\nQuotient is: %f\n", (float) num / (float)num1);
}