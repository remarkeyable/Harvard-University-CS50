#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int main(void)
{

    string text = get_string("Write your text: ");
    if (count_letters(text) >= 16)
    {
        printf("Grade 16+\n");
    }

    else if (count_letters(text) < 1)
    {
        printf("Before Grade 1\n");
    }

    else
    {
        printf("Grade %i\n", count_letters(text));
    }
}

int count_letters(string text)
{

    float characters = 0.0;
    float words = 1.0;
    float sentences = 0.0;
    float avg_l;
    float avg_s;
    int total;

    int lenght = strlen(text);
    for (int i = 0; i < lenght; i++)
    {
        if (isalpha(text[i]))
            characters += 1.0;
        else if (isspace(text[i]))
            words += 1.0;
        else if (text[i] == '?' || text[i] == '.' || text[i] == '!')
            sentences += 1.0;
    }
    avg_l = (characters / words) * 100;
    avg_s = (sentences / words) * 100;

    float index = 0.0588 * avg_l - 0.296 * avg_s - 15.8;
    total = round(index);
    return total;
}