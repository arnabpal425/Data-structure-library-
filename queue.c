#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

Queue* createQueue(int capacity) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->arr = (int*)malloc(capacity * sizeof(int));
    return queue;
}

int isFull(Queue* queue) {
    return queue->size == queue->capacity;
}

int isEmptyQ(Queue* queue) {
    return queue->size == 0;
}

void enqueue(Queue* queue, int item) {
    if (isFull(queue)) {
        printf("Queue full!\n");
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->arr[queue->rear] = item;
    queue->size++;
}

int dequeue(Queue* queue) {
    if (isEmptyQ(queue)) {
        printf("Queue empty!\n");
        return -1;
    }
    int item = queue->arr[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;
    return item;
}

void freeQueue(Queue* queue) {
    free(queue->arr);
    free(queue);
}
