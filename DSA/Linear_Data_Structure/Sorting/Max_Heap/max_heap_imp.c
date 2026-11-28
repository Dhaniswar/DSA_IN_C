/**
 

#include<stdio.h>
#include<stdlib.h>


int A[5];
int n = 5;

int insertion_heap(A, n, value){
    n = n+1;
    A[n]=value;
    int i=n;

    whike(i>1){
        int parent = i/2 //floor
        if(a[parent]<A[i]){
            swap(A[parent], A[i]);
            i=parent;
        }
        else{
            return;
        }
    }


}

 */






#include <stdio.h>
#include <stdlib.h>

int a[6];
int n = 0;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion_heap(int a[], int *n, int value)
{
    *n = *n + 1;

    a[*n] = value;

    int i = *n;

    while (i > 1)
    {
        int parent = i / 2;

        if (a[parent] < a[i])
        {
            swap(&a[parent], &a[i]);
            i = parent;
        }
        else
        {
            return;
        }
    }
}

int main()
{
    insertion_heap(a, &n, 50);
    insertion_heap(a, &n, 30);
    insertion_heap(a, &n, 40);
    insertion_heap(a, &n, 10);
    insertion_heap(a, &n, 20);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
