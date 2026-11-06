
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void CheckPassword(char password[])
{
    int length = strlen(password);

    int upper = 0;
    int lower = 0;
    int digit = 0;
    int symbol = 0;
    int score = 0;

    for (int i = 0; i < length; i++)
    {
        unsigned char ch = (unsigned char)password[i];

        if (isupper(ch))
            upper = 1;
        else if (islower(ch))
            lower = 1;
        else if (isdigit(ch))
            digit = 1;
        else
            symbol = 1;
    }

    if (length >= 8)
        score++;

    if (upper)
        score++;

    if (lower)
        score++;

    if (digit)
        score++;

    if (symbol)
        score++;

    printf("\nPassword Length: %d\n", length);

    printf("\nPassword Requirements:\n");
    printf("At least 8 characters: %s\n", length >= 8 ? "Yes" : "No");
    printf("Uppercase letters: %s\n", upper ? "Yes" : "No");
    printf("Lowercase letters: %s\n", lower ? "Yes" : "No");
    printf("Numbers: %s\n", digit ? "Yes" : "No");
    printf("Symbols: %s\n", symbol ? "Yes" : "No");

    printf("\nPassword Score: %d/5\n", score);

    if (score <= 2)
        printf("Password Strength: Weak\n");
    else if (score <= 4)
        printf("Password Strength: Acceptable\n");
    else
        printf("Password Strength: Strong\n");
}

int main()
{
    char password[100];

    printf("Enter your password: ");
    scanf("%99s", password);

    CheckPassword(password);

    return 0;
}
