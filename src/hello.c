#include <stdio.h>

int main(void)
{
    // Declare name variable
    char name[20];
 
    // Ask user for their name
    printf("Enter your name: ");
    scanf("%s", name);

    // Output hello name
    printf("Hello, %s\n", name );
}