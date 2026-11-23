#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int i, j, min;

    int a[6] = {1, 4, 10, 8, 3, 7};

    int n = 6;

    for (i = 0; i < n - 1; i++)
    {

        min = i;

        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            swap(&a[i], &a[min]);
        }
    }

    printf("Sorted array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}