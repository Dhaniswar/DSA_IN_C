
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, temp, k;
    int a[6] = {5, 4, 10, 1, 6, 2};
    int n = 6;

    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp;
    }

    printf("Sorted Array elements using insertion sort\n");

    for (k = 0; k < n; k++)
    {
        printf("%d\n", a[k]);
    }

    return 0;
}
