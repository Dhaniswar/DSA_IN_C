#include<stdio.h>
#include<stdlib.h>

/*
1. we can incfement/decrement the pointer
2. We can add/substract integer value from address but not address + address or address - address

3. if we increment/decrement then it increase/decrease by size of data types

For instance, int a =10, *p;
    p = &a;
    p++;

    then if the address of a=200 then after increment it will increase to 2004 (cause size of interger data types is 4)

4. But you can not change base address of array

for example ,4] = [10,20,23, 24];

a++; //This is wrong(You can not change base address of array)
let us consider base address of array a = 200
(a + 1) => a(base address) + 1(size of one integer data types) => a + 1*4 => 2004
(a + 2) => a(base address) + 2(size of two integer data types) => a + 2*4 => 2008
(a + 3) => a(base address) + 2(size of three integer data types) => a + 3*4 => 2012
.
.
Or if want to access value insted of address using derefrences pointer then you can access like that
*(a + 1) => It will print value of that address hold =>20
*(a + 2) => It will print value of that address hold =>30
*(a + 3) => It will print value of that address hold =>40


3. You can write
 a[i] = *(a + i)
      = *(p + i)
      = *(i + a)
      = i[a]



*/



/*


void main() {

    int m[5] = {10,20,30,40,50};

    printf("Array name hols the base address of array: %p\n", m);
    printf("Array name hols the base address of array: %d\n", *m);


    int *q, i;

    q = m;

    printf("value of q hols is: %p\n", q);

    q++;

    printf("Address of array a with increment: %d\n", *q);

    for(i=0; i<5; i++) {
        printf("value of array: %d\n", *(m+i));
    } 



}


*/



/*


void main() {

    int m[6] = {10,20,30,40,50}, i;

    printf("base address of array: %p\n", m);
    printf("first address of array at index one: %p\n", m+1);
    printf("base address of array: %p\n", &m + 1);

    printf("Value of the base address of array: %d\n", *m + 1);


    




    for(i=0; i<5; i++) {
        // printf("value of array: %d\n", *(m+i));
        printf("value of array: %d\n", i[m]);

    } 



}

*/




void main() {
    int a[50], i, size;
    int *p;

    p = a;

    printf("Enter the size of Array: \n");
    scanf("%d", &size);

    if(size>=50) {
        printf("Stack overflow, please inter array size less than 50: \n");
        exit(1);
    }

    else {
        printf("Enter the array of elements: \n");
        for(i=0; i<size; i++) {

            scanf("%d", (a+i));
            // scanf("%d", &p[i]);


        }

        printf("array of elements is displayed below: \n");
        for(i=0; i<size; i++) {

            // printf("%d\n", *(a+i));
            // printf("%d\n", *(p+i));
            printf("%d\n", i[p]);


        }


    }



}