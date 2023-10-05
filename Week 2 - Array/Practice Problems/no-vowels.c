// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string replace(int argc, string argv[]);
int main(int argc, string argv[])
{
    printf("%s\n", replace(argc, argv));
}

string replace(int argc, string argv[])
{
    for (int i = 0; i < strlen(argv[1]); i++)

        switch (toupper(argv[1][i]))
        {
            case 'A':
                argv[1][i] = '6';
                break;
            case 'E':
                argv[1][i] = '3';
                break;
            case 'I':
                argv[1][i] = '1';
                break;
            case 'O':
                argv[1][i] = '0';
                break;
            case 'U':
                argv[1][i] = 'u';
                break;
        }
    return argv[1];
}