#include <stdio.h>
#include <string.h>

int main(void)
{
    // Declare variable
    char response[3];

    // Ask user for their response
    printf("Do you agree?(yes or no): ");
    scanf("%s", response);

    // Output response based on response
    if (strcmp(response, "yes") == 0)
    {
        printf("Agreed.\n");
    }
    else if (strcmp(response, "no") == 0)
    {
        printf("Not agreed.\n");
    }
    
}