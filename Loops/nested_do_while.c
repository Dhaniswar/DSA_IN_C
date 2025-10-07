#include <stdio.h>
#include <stdlib.h>

/*

do while within a do while is called nested do while loop

*/



/*

void main()
{
    int i = 1, j = 3;

    do
    {

        do
        {
            printf("%d\n", j);
            j--;
        } while (j > 0);

        i++;

        printf("%d\n", i);

    } while (i < 4);
}


*/



void main()
{
    int i = 1, j = 3;

    do
    {

        do
        {
            printf("%d\n", j--);

        } while (j > 0);


        printf("%d\n", i++);

    } while (i < 4);
}

