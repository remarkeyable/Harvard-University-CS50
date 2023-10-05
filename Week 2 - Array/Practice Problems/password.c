// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)

{
    int pass_len = strlen(password);
    int isalpha = 0;
    int islower = 0;
    int isupper = 0;
    int isgraph = 0;
    int isxdigit = 0;
    int count = 0;

    do
    {

        if (islower(password[count]))
        {
            islower = 1;
        }

        if (isupper(password[count]))
        {
            isupper = 1;
        }

        if (isalpha(password[count]))
        {
            isalpha = 1;
        }

        if (isgraph(password[count]) && (int) isalnum(password[count]) != 8)
        {
            isgraph = 1;
        }

        if (isxdigit(password[count]))
            isxdigit = 1;
        count++;
    }
    while (pass_len != count);

    if (isalpha == 1 && islower == 1 && isupper == 1 && isgraph == 1 && isxdigit == 1)
    {
        return true;
    }

    else
    {
        return false;
    }
}
