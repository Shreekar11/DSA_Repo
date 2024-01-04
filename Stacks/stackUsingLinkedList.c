#include<stdio.h>
#include<stdlib.h>

#define MAX  100

struct Node{
    int data;
    struct Node* next;
};

int isFull(struct Node* top){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    if(new_node == NULL){
        return 1;
    }
    return 0;
}

int isEmpty(struct Node* top){
    if(top == NULL){
        return 1;
    }
    return 0;
}

struct Node* push(struct Node* top, int val){
    if(isFull(top)){
        printf("Stack Overflow \n");
        return top;
    }

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->next = top;
    new_node->data = val;
    top = new_node;

    return top;
}

int pop(struct Node** top){
    if(isEmpty(*top)){
        printf("Stack Underflow \n");
        return -1;       
    }

    int res = (*top)->data;
    struct Node* temp = (*top);
    (*top) = (*top)->next;
    free(temp);

    return res;
}

void display(struct Node* top){
    struct Node* temp = top;
    while(temp != NULL){
        printf("%d \n", temp->data);
        temp = temp->next;
    }

    return;
}

int main(){

    int size = MAX;
    struct Node* head = NULL;
    head = push(head, 5);
    head = push(head, 6);
    head = push(head, 7);
    head = push(head, 8);

    display(head);


    return 0;
}