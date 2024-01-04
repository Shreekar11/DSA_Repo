#include<stdio.h>
#include<stdlib.h>

struct Node* front = NULL;
struct Node* rear = NULL;

struct Node{
  int data;
  struct Node* next;  
};

void enqueue(int val){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    if(new_node == NULL){
        printf("Queue Full \n");
        return;
    }

    new_node->data = val;
    new_node->next = NULL;
    if(front == NULL){
        front = rear = new_node;
        return;
    }

    rear->next = new_node;
    new_node = rear;
}

int dequeue(){
    if(front == NULL){
        printf("Queue Empty \n");
        return -1;
    }
    
    struct Node* temp = front;
    front = front->next;
    int ans = front->data;
    free(temp);

    return ans;
}

int first(){
    if(front == NULL){
        printf("Queue Empty \n");
        return -1;
    }

    return front->data;
}

void display(struct Node* front){
    struct Node* temp = front;
    while(temp != NULL){
        printf("%d \n", temp->data);
        temp = temp->next;
    }

    return;
}

int main(){

    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display(front);

    return 0;
}