#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i;

    p = (int *)malloc(3 * sizeof(int));

    if (p == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter 3 numbers:\n");

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("The numbers are:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}