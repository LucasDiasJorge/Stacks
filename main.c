#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

struct stack {
    int data[MAX_STACK_SIZE];
    int top;
};

typedef struct stack stack;

void init_stack(stack *s) {
    s->top = -1;
}

int is_empty(stack *s) {
    return (s->top == -1);
}

int is_full(stack *s) {
    return (s->top == MAX_STACK_SIZE - 1);
}

void push(stack *s, int value) {
    if (is_full(s)) {
        printf("Erro: a pilha está cheia\n");
        exit(1);
    } else {
        s->data[++(s->top)] = value;
    }
}

int pop(stack *s) {
    if (is_empty(s)) {
        printf("Erro: a pilha está vazia\n");
        exit(1);
    } else {
        return s->data[(s->top)--];
    }
}

int top(stack *s) {
    if (is_empty(s)) {
        printf("Erro: a pilha está vazia\n");
        exit(1);
    } else {
        return s->data[s->top];
    }
}

int main() {
    stack s;
    init_stack(&s);

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);

    printf("%d\n", pop(&s)); // saída: 3
    printf("%d\n", pop(&s)); // saída: 2
    printf("%d\n", top(&s)); // saída: 1

    return 0;
}
