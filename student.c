#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    int i;

    p = calloc(5, sizeof(int));

    if (p == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Initial value:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}