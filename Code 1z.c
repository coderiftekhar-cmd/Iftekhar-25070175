#include <stdio.h>
#include <string.h>

void generate(char a[], int start, int end)
{
    int i;
    char temp;

    if (start == end)
    {
        printf("%s\n", a);
    }
    else
    {
        for (i = start; i <= end; i++)
        {
            temp = a[start];
            a[start] = a[i];
            a[i] = temp;

            generate(a, start + 1, end);

            temp = a[start];
            a[start] = a[i];
            a[i] = temp;
        }
    }
}

int main()
{
    char elements[50];

    printf("Enter elements: ");
    scanf("%s", elements);

    printf("Permutations:\n");
    generate(elements, 0, strlen(elements) - 1);

    return 0;
}