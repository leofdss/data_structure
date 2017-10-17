#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

Stack *create_stack(){
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->top = (Node *)NULL;
    stack->count = 0;
    return stack;
}

int is_stack_clear(Stack *stack){
    if (stack == NULL || stack->count == 0)
        return TRUE;
    return FALSE;
}

int push_stack(Stack *stack, void *value){
    if(stack == NULL){
        return FALSE;
    }
    else {
        Node *node = (Node *) malloc(sizeof(Node));
        node->value = value;
        node->next = stack->top;
        stack->top = node;
        return TRUE;
    }
}

int pop_stack(Stack *stack, void *value){
    if(stack == NULL){
        return FALSE;
    }
    else {
        Node *node = (Node *) malloc(sizeof(Node));
        node = stack->top;
        value = node->value;
        stack->top = node->next;
        free(node);
        return TRUE;
    }
}
