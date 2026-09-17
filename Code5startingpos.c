#include <stdio.h>

int main()
{
    char str[100], sub[50];
    int i, j, found = 0;

    printf("Enter the main string: ");
    gets(str);

    printf("Enter the substring: ");
    gets(sub);

    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while (sub[j] != '\0' && str[i + j] == sub[j])
            j++;

        if (sub[j] == '\0')
        {
            printf("Substring found at position: %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Substring not found.\n");

    return 0;
}