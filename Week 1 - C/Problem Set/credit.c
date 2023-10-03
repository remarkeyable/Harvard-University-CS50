#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    long digit = get_long("Enter number: ");
    int count = 0;
    int add = 0;
    int left = 0;
    int first_digit = 0;
    long start_num = digit;

    do
    {
        start_num /= 10;
    }
    while (start_num > 100);

    do
    {
        int last_num = (digit % 10 * 2);
        int left_num = (digit % 10);
        first_digit = (digit % 10);
        digit /= 10;
        count++;

        if (count % 2 == 0)
        {
            if (log10(last_num) < 1)
            {
                add += last_num;
            }
            else
            {
                int a = last_num;
                int c = 0;
                do
                {
                    int b = (a % 10);
                    a /= 10;
                    add += b;
                    c++;
                }
                while (a != 0);
            }
        }
        else
        {
            left += left_num;
        }
    }

    while (digit != 0);

    int total = left + add;
    if (count == 15 && total % 10 == 0 && (start_num == 34 || start_num == 37))
        printf("AMEX\n");
    else if ((count == 16 || count == 13) && total % 10 == 0 && first_digit == 4)
        printf("VISA\n");
    else if (count == 16 && total % 10 == 0 && first_digit != 4 &&
             (start_num == 51 || start_num == 52 || start_num == 53 || start_num == 54 || start_num == 55))
        printf("MASTERCARD\n");
    else
    {
        printf("INVALID\n");
    }
}