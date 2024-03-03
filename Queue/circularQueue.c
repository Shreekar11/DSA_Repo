#include<stdio.h>
#include<stdlib.h>

struct CircularQueue{
    int front;
    int rear;
    int size;
    int* arr;
};

void enqueue(struct CircularQueue *q, int val){
    // Full condition
    if(isFull(struct CircularQueue* q)){
        printf("Queue Full \n");
        return;
    }

    q->r = (q->r)%(q->size);

    q->arr[q->rear] = val;
    q->rear = q->rear+1;
    return;
}

int dequeue(struct CircularQueue* q){
    if(isEmpty(struct CircularQueue* q)){
        return 1;
    }
    int val;
    val = q->arr[q->front];
    q->front = q->front%q->size;
    return val;
}

int main(){

    return 0;
}