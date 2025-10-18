#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        printf("\033[31mE:\033[om You wrote an unsuported operation\n");

        return 0;
    }

    int x = atoi (argv[1]);
    char op = argv[2][0];
    int y = atoi (argv[3]);

    if (op == '+')
    {
        printf("%i\n", x + y);
    }

    else if (op == '-')
    {
        printf("%i\n", x - y);
    }

    else if (op == '*')
    {
        printf("%i\n", x * y);
    }
    else if (op == '/')
    {
        if (y == 0)
        {
            printf("\033[31mE:\033[0m Divisio by zero!\n");
            return 1;
        }
        else
            printf("%f\n", x / (float)y);
    }

    else
    {
        printf("\033[31mE:\033[0m You entered an invalid operatio! Try again;\n");
    }
}