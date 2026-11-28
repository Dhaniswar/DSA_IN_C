#include<stdio.h>
#include<stdlib.h>


/*

MaxHeapify(A,n,i)
{
int largest=i;

int l=(2*i);
int r=(2*i)+1;


while(l<=n && A[l] >A[largest])
{
largest=l;
}

while(r<=n; && A[r]>A[largest])
{

largest=r;
}

if(largest !=i)
{
swap(A[largest], A[i]);
MaxHeapify(A,n, largest);
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

int main()
{
    int A[6] = {0, 10, 30, 20, 5, 15};

    int n = 5;

    MaxHeapify(A, n, 1);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", A[i]);
    }

    return 0;
}
