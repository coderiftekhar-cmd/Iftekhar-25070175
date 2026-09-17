#include <stdio.h>

int LENGTH(char str[])
{
    int i = 0;

    while (str[i] != '\0')
        i++;

    return i;
}

char GETCHAR(char str[], int n)
{
    return str[n];
}

void PUTCHAR(char str[], int n, char c)
{
    str[n] = c;
}

int POS(char str1[], char str2[])
{
    int i, j;

    for (i = 0; str1[i] != '\0'; i++)
    {
        j = 0;

        while (str2[j] != '\0' && str1[i + j] == str2[j])
            j++;

        if (str2[j] == '\0')
            return i;
    }

    return -1;
}

void CONCAT(char str1[], char str2[])
{
    int i = LENGTH(str1);
    int j = 0;

    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

void SUBSTRING(char str1[], int i, int m, char result[])
{
    int j;

    for (j = 0; j < m && str1[i + j] != '\0'; j++)
        result[j] = str1[i + j];

    result[j] = '\0';
}

void DELETE(char str[], int i, int m)
{
    int j;

    for (j = i; str[j + m] != '\0'; j++)
        str[j] = str[j + m];

    str[j] = '\0';
}

void INSERT(char str1[], char str2[], int i)
{
    int len1 = LENGTH(str1);
    int len2 = LENGTH(str2);
    int j;

    for (j = len1; j >= i; j--)
        str1[j + len2] = str1[j];

    for (j = 0; j < len2; j++)
        str1[i + j] = str2[j];
}

int COMPARE(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];

        i++;
    }

    return str1[i] - str2[i];
}

int main()
{
    char str1[100] = "Hello";
    char str2[50] = " World";
    char result[50];

    printf("Length = %d\n", LENGTH(str1));

    printf("Character at position 1 = %c\n",
           GETCHAR(str1, 1));

    PUTCHAR(str1, 1, 'a');
    printf("After PUTCHAR = %s\n", str1);

    printf("Position = %d\n",
           POS(str1, "lo"));

    CONCAT(str1, str2);
    printf("After CONCAT = %s\n", str1);

    SUBSTRING(str1, 0, 5, result);
    printf("Substring = %s\n", result);

    DELETE(str1, 5, 6);
    printf("After DELETE = %s\n", str1);

    INSERT(str1, " CSE", 5);
    printf("After INSERT = %s\n", str1);

    printf("Compare result = %d\n",
           COMPARE(str1, str2));

    return 0;
}