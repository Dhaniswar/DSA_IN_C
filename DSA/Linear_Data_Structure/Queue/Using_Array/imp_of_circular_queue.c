#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Implementation of Circular Queue using static memory allocation(Array)
*/

#define N 5

int queue[N];

int front = -1;
int rear = -1;

void enqueue()
{

    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);

    if ((rear+1) % N == front)
    {
        printf("Overflow condition occurs!\n");
    }

    else if (front == -1 && rear == -1)
    {

        front = rear = 0;
        queue[rear] = a;
    }

    else
    {

        rear=(rear+1)%N;
        queue[rear] = a;
    }
}

