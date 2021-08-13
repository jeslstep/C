#include <stdio.h>

int main(void)
{
    // Declare variable
    char name[20];
 
    // Prompt user for input
    printf("Enter your name: ");
    scanf("%s", name);

    // Output
    printf("Hello, %s\n", name );
}