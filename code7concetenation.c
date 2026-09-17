#include <stdio.h>

int main()
{
    char str1[100], str2[50];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Find the end of str1
    for (i = 0; str1[i] != '\0'; i++);

    // Copy str2 after str1
    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }

    str1[i] = '\0';

    printf("After concatenation: %s", str1);

    return 0;
}