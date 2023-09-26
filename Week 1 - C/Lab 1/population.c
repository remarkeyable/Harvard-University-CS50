#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start, end, total;
    int years = 0;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    do
    {
        end = get_int("End size: ");
    }

    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    do
    {
        if (start == end)
            break;
        total = ((start / 3) - (start / 4));
        start = (start + total);
        years++;
    }
    while (start < end);

    // TODO: Print number of years
    {
        printf("Years: %i\n", years);
    }
}
