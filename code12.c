#include <stdio.h>

int main()
{
    int a[100], n, item;
    int i, position = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to search: ");
    scanf("%d", &item);

    
    for (i = 0; i < n; i++)
    {
        if (a[i] == item)
        {
            position = i;
            break;
        }
    }

    if (position != -1)
        printf("Element found at index: %d\n", position);
    else
        printf("Element not found.\n");

    return 0;
}