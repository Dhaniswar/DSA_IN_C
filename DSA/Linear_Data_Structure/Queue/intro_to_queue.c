#include<stdio.h>
#include<stdlib.h>

/*

Queue:
1. It is a linear data structure (It is also called abstract Data type)
2. Queue is a collection or an order list works on First In First Out (FIFO) principle
=> It is an order list or collection in which insertion can performed from one end thst is from end and deletion can be performed from another end that is front end of the queue
3. Queue is the structure which is going to flow the some restriction on insertion and on deletion operation
4. Incase of Queue, insertion is performed from one end and that is called Rear/tail
5. And the deletion is performed from another end and that end is known as Head/front
6. In Queue we mostly use Rear and Front
7. In Queue rather than Insertion() we use Enqueue() and Deletion() we use Dequeue()
8. In Queue we have to Insert or Enqueue data from Rear(tail) and Delete or Dequeue data from Front(head)
9. We can implement Queue using Array, Linked list, and Stack
10. At first front=rear=-1 (hypothethically we assume that there is -1 index)

#Operation on Queue (And these operations take order of one O(1) time complexcity)
a). Enqueue(a) (inserting) We can pass data
b). Dequeue() (deletion) it doesnot take any parameter
c). front() / peek() => it will tell you what is the element at the front of the queue (with out dequeuing(removing) that element from the queue)
d). isFull() => It will return true if Queue is full otherwise false
e). isEmpty() => It willl return false if Queue is empty

Note: One Drawback of normal Queue is if both front and rear point to the same that is last of the queue then we can not enqueue/insert data even there are empty space

#Some important application of Queue
i. It is very useful where you want to serve in a single share resource (eg, one printer and 5 pc sharing that one pc they are giving command to printer then in the memory it will keep in queue)
ii. Another example Processor

*/