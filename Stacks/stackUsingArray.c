#include<stdio.h>
#include<stdlib.h>

#define MAX  100

struct Stack{
    int size;
    int top;
    int* arr;
};

int isFull(struct Stack* st){
    if(st->top == st->size - 1){
        return 1;
    }

    return 0;
}

int isEmpty(struct Stack* st){
    if(st->top < 0){
        return 1;
    }

    return 0;
}

void push(struct Stack* st, int val){
    if(isFull(st)){
        printf("Stack Overflow \n");
        return;
    }

    st->top += 1;
    st->arr[st->top] = val;

    return;
}

int pop(struct Stack* st){
    if(isEmpty(st)){
        printf("Stack Empty \n");
        return -1;
    }

    int val = st->arr[st->top];
    st->top -= 1;

    return val;
}

int peek(struct Stack* st){
    return st->arr[st->top];
}

int main(){

    struct Stack* st = (struct Stack*) malloc(sizeof(struct Stack));
    st->size = MAX;
    st->top = -1;
    st->arr = (int*)malloc(st->size * sizeof(int));

    push(st,5);
    push(st,6);
    push(st,7);
    push(st,8);

    while(!isEmpty(st)){
        printf("%d \n", peek(st));
        pop(st);
    }

    return 0;
}