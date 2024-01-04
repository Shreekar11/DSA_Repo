#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    struct Node* next;

};

struct Node* createNode(int val){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = val;
    new_node->next = NULL;
}

struct Node* insertAtHead(struct Node* head, int val){
    struct Node* new_node = createNode(val);
    if(head == NULL){
        new_node = head;
        return head;
    }
    new_node->next = head;
    head = new_node;
    return head;
}

struct Node* insertAtTail(struct Node* head, int val){
    struct Node* new_node = createNode(val);
    if(head == NULL ){
        new_node = head;
        return head;
    }

    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = new_node;
    return head;
}

void display(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL \n");

    return;
}

int main(){
    struct Node* head = createNode(1);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 3);
    head = insertAtTail(head, 4);
    display(head);

    return 0;
}