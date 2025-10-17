#include <stdio.h>
#include <cs50.h>

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        printf("\033[31mE:\033[om You wrote an unsuported operation\n");

        return 0;
    }

    int x = argv[1];
    int op = argv[2];
    int y = argv[3];

    if (op == '+')
    {
        printf("%i", x + y);
    }

    else if (op == '-')
    {
        printf("%i", x - y);
    }

    else if (op == '*')
    {
        printf("%i", x * y);
    }
    else if (op == '/')
    {
        if (y == 0)
        {
            printf("\033[31mE:\033[0m Divisio by zero!\n");
            return 1;
        }
        else
            printf("%i", x / y);
    }

    else
    {
        printf("\033[31mE:\033[0m You entered an invalid operatio! Try again;\n");
    }
}