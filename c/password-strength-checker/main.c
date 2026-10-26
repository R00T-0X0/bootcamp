
#include <stdio.h>
#include <string.h>

int main()
{
    char password[100];
    int upper = 0;
    int lower = 0;
    int digit = 0;
    int symbol = 0;

    printf("Enter your password: ");
    scanf("%99s", password);

    for (int i = 0; i < strlen(password); i++)
    {
        if (isupper(password[i]))
            upper = 1;
        else if (islower(password[i]))
            lower = 1;
        else if (isdigit(password[i]))
            digit = 1;
        else
            symbol = 1;
    }

    if (strlen(password) > 8 &&
        upper && lower && digit && symbol)
    {
        printf(" Your Password Strong\n");
    }
    else if (upper + lower + digit + symbol >= 2)
    {
        printf("  YOur  Password Medium\n");
    }
    else
    {
        printf( " Your Password Weak\n");
    }

    return 0;
}

