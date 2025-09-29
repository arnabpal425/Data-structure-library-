#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data);
void insertAtEnd(Node** head, int data);
void displayList(Node* head);
void freeList(Node* head);

#endif
