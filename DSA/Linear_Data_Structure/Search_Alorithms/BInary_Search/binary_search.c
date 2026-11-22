#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[10] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};

    int n = 10;
    int l = 0;
    int r = 9; // r=n-1

    int data = 59;

    int mid = 0;

    while (l <= r)
    {
        mid = (l + r) / 2;

        if (data == a[mid])
        {
            printf("data found at index: %d which is %d\n", mid, a[mid]);
            break;
        }

        else if (data < a[mid])
        {
            r = mid - 1;
        }

        else
        {
            l = mid + 1;
        }

        
    }

    return -1;
}