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

    // Output the sum of first and second integer
    printf("\nSum is: %d\n", num + num1);
}