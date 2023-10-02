#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    // print blocks
    int loop_count = 0;
    int left_blocks = 0;
    int right_blocks = height;
    int a = 0;
    do
    {
        for (int i = right_blocks - 1; i != 0; i--)
        {
            printf(" ");
        }
        for (int j = left_blocks; j != 1; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = left_blocks; k != 1; k++)
        {
            printf("#");
        }
        printf("\n");

        left_blocks--;
        right_blocks--;
        loop_count++;
    }
    while (loop_count != height);
}
