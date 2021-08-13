#include <stdio.h>

void meow(void)
{
    printf("meow\n");
}

int main(void)
{
    // this 
    // int i = 0;
    // while (i <= 5)
    // {
    //     printf("hello, world\n");
    //     i++;
    // }

    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}
