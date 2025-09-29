#ifndef QUEUE_H
#define QUEUE_H

typedef struct Queue {
    int front, rear, size;
    int capacity;
    int* arr;
} Queue;

Queue* createQueue(int capacity);
int isFull(Queue* queue);
int isEmptyQ(Queue* queue);
void enqueue(Queue* queue, int item);
int dequeue(Queue* queue);
void freeQueue(Queue* queue);

#endif
