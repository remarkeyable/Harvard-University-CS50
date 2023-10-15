#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);
int count = 1;
int num = 0;
int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // TODO

    int len = strlen(input);
    int Numval = input[count - 1] - 48;

    if (count == len + 1)
    {
        return num;
    }

    else
    {
        count++;
        num = num * 10 + (Numval);
        convert(input);
    }

    return num;
}