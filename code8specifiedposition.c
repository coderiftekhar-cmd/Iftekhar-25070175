#include <stdio.h>

int main()
{
    char str[100], text[50];
    int pos, i, j;

    printf("Enter the string: ");
    scanf("%s", str);

    printf("Enter the text to insert: ");
    scanf("%s", text);

    printf("Enter the position: ");
    scanf("%d", &pos);

    // Make space for the new text
    for (i = 0; str[i] != '\0'; i++);

    for (j = i; j >= pos; j--)
        str[j + (i - pos + 1)] = str[j];

    // Insert the text
    for (i = 0; text[i] != '\0'; i++)
        str[pos + i] = text[i];

    printf("After insertion: %s\n", str);

    return 0;
}