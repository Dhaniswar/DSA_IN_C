/*
int Heapsort(A, n){

for(i=n/2; i>=1; i--){

MaxHeapify(A,n,i);
}


for(i=n; i>=1; i--){

swap(A[i], A[i]);
MaxHeapify(A,i-1, 1)

}

}

*/





#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void MaxHeapify(int A[], int n, int i)
{
    int largest = i;

    int l = 2 * i;
    int r = (2 * i) + 1;

    if (l <= n && A[l] > A[largest])
    {
        largest = l;
    }

    if (r <= n && A[r] > A[largest])
    {
        largest = r;
    }

    if (largest != i)
    {
        swap(&A[largest], &A[i]);

        MaxHeapify(A, n, largest);
    }
}

void Heapsort(int a[], int n)
{
    int i;

    // Build Max Heap
    for (i = n / 2; i >= 1; i--)
    {
        MaxHeapify(a, n, i);
    }

    // Heap Sort
    for (i = n; i >= 2; i--)
    {
        swap(&a[1], &a[i]);

        MaxHeapify(a, i - 1, 1);
    }
}

int main()
{
    int a[6] = {0, 5, 4, 10, 8, 3};
    int n = 5;
    int i;

    Heapsort(a, n);

    printf("Sorted Array:\n");

    for (i = 1; i <= n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
