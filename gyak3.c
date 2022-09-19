// control statement

#include <stdio.h>
#include <stdbool.h> // C99
// c. leventefazekas.hu
int main(int argc, char const *argv[])
{
    int n;
    double a;
    double b;
    char op;
    double result;

    bool ok;
    do
    {
        ok = true;
        printf("How many calculations, peasant? : ");
        if (scanf("%i", &n) != 1)
        {
            printf("You are an idiot! :)");
            ok = false;
        }
        while (getchar() != '\n')
        {
        }

    } while (!ok);

    for (int i = 0; i < n; i++)
    {
        do
        {
            ok = true;
            printf("Calculate smthin: ");
            if (scanf("%lf %c %lf", &a, &op, &b) != 3)
            {
                ok = false;
                printf("NOT GUD! BAD!\n");
                // Clear the input buffer
                while (getchar() != '\n')
                {
                }
            }
        } while (!ok);

        switch (op)
        {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*': // fallthrough
        case 'x':
            result = a * b;
            break;
        case '/':
            if (b == 0)
            {
                printf("Division by 0!\n");
                return 1;
            }
            result = a / b;
            break;
        default:
            printf("Operator %c is not defined!\n", op);
            return 2;
        }
        printf("%lf %c %lf = %lf\n", a, op, b, result);
    }
}