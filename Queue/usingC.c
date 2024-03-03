#include<stdio.h>
#include<stdlib.h>
#define MAX 10001

struct Queue{

    int* arr;
    int front;
    int rear;
    int size;
};

int isFull(struct Queue* q){
    if(q->rear == q->size){
        return 1;
    }

    return 0;
}

int isEmpty(struct Queue* q){
    if(q->front == q->rear){
        return 1;
    }

    return 0;
}

void enqueue(struct Queue* q, int val){
    if(q->rear == q->size){
        printf("Queue Full \n");
        return;
    }

    q->arr[q->rear] = val;
    q->rear += 1;
    return;
}

int dequeue(struct Queue* q){
    if(q->front == q->rear){
        printf("Queue Empty \n");
        return -1;
    }

    int ans = q->arr[q->front];
    q->front += 1;
    if(q->front == q->rear){
        q->front = 0;
        q->rear = 0;
    }

    return ans;
}

int peek(struct Queue* q){
    return q->arr[q->front];
}


int main(){

    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = 0;
    q->rear = 0;
    q->size = MAX;
    q->arr = (int*)malloc(q->size * sizeof(int));

    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 4);
    enqueue(q, 5);
    while(!isEmpty(q)){
        printf("%d \n", first(q));
        dequeue(q);
    }

    return 0;
}