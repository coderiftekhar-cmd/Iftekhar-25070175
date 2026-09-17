#include <stdio.h>

int main()
{
    char text[100], pattern[50];
    int i, j, index = -1;

    printf("Enter the string: ");
    scanf(" %[^\n]", text);

    printf("Enter the pattern: ");
    scanf(" %[^\n]", pattern);

    for (i = 0; text[i] != '\0'; i++)
    {
        for (j = 0; pattern[j] != '\0'; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }

        if (pattern[j] == '\0')
        {
            index = i;
            break;
        }
    }

    if (index != -1)
        printf("Pattern found at index: %d\n", index);
    else
        printf("Pattern not found.\n");

    return 0;
}