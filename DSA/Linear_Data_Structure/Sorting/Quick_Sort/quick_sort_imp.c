
#include <stdio.h>
#include <stdlib.h>

int a[5];

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int lb, int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end = ub;

    while (start < end)
    {
        while (a[start] <= pivot && start < ub)
        {
            start++;
        }

        while (a[end] > pivot)
        {
            end--;
        }

        if (start < end)
        {
            swap(&a[start], &a[end]);
        }
    }

    swap(&a[lb], &a[end]);

    return end;
}

void quicksort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int location = partition(a, lb, ub);

        quicksort(a, lb, location - 1);
        quicksort(a, location + 1, ub);
    }
}

int main()
{
    int i;

    int a[5] = {10, 4, 2, 8, 6};

    quicksort(a, 0, 4);

    printf("Sorted array:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
