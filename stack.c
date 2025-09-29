#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack* createStack(int capacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->arr = (int*)malloc(capacity * sizeof(int));
    return stack;
}

void push(Stack* stack, int item) {
    if (stack->top == stack->capacity - 1) {
        printf("Stack overflow!\n");
        return;
    }
    stack->arr[++stack->top] = item;
}

int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow!\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

int peek(Stack* stack) {
    if (isEmpty(stack)) return -1;
    return stack->arr[stack->top];
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

void freeStack(Stack* stack) {
    free(stack->arr);
    free(stack);
}
