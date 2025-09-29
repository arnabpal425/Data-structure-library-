#include <stdio.h>
#include "include/ds.h"

int main() {
    
    Node* head = NULL;
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    displayList(head);
    freeList(head);

    Stack* stack = createStack(5);
    push(stack, 1);
    push(stack, 2);
    printf("Popped: %d\n", pop(stack));
    freeStack(stack);

    Queue* queue = createQueue(5);
    enqueue(queue, 5);
    enqueue(queue, 6);
    printf("Dequeued: %d\n", dequeue(queue));
    freeQueue(queue);

    return 0;
}
